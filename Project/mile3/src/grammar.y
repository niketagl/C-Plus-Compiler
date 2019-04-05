%{

extern int yylex();
void yyerror(const char*);
void yyerror2(const char*);
void yyerror3(char*);
void warning(const char *s);

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char yytext[];
extern int column;
extern int yylineno;


%}

%code requires {
	#include "src/symboltable.h"
	#include "src/tac.h"
	#include <stack>
	#include <iostream>
	#include <vector>
	#include <string>
	using namespace std;
	extern stack < table_ptr > table_stack;
	extern vector < table_entry_ptr > arg_list;
	extern stack < int > offset_stack;
	extern table_ptr struct_namespace;
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;
}

%union{
	char charval;
	int intval;
	float floatval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;
}

%token IDENTIFIER INTEGER_CONSTANT CHAR_CONSTANT FLOAT_CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER 
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS THIS SCOPE_RES ASM CLASS PRIVATE PROTECTED PUBLIC

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit

%expect 1

%%

class_name
	: IDENTIFIER { $<stringval>$ = $<stringval>1; }
	;

primary_expression
	: literal 	{ $<entry>$ = $<entry>1; }
	| THIS
	| SCOPE_RES IDENTIFIER
	| class_name 		{ 
						if(!lookup(table_stack.top(),$<stringval>1))
						{
							char* error = (char *) malloc (100 * sizeof(char));
							sprintf(error, "%s%s%s","Identifier \"", $<stringval>1, "\" not declared");
							yyerror3(error);
							$<entry>$ = new table_entry;
							$<entry>$->type = new_basic_type(ERROR);
						}
						else
						{
							$<entry>$ = lookup(table_stack.top(), $<stringval>1);
						} 
				}
	| '(' expression ')'  { $<entry>$ = $<entry>2; }
	;

literal
	: INTEGER_CONSTANT		{ 		$<entry>$ = new table_entry; 
									$<entry>$->type = new_basic_type(INTEGER);
									$<entry>$->type->value = $<intval>1; 
									$<entry>$->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%d",$<intval>1); 
									$<entry>$->name = s;  
							}  

	| CHAR_CONSTANT 		{ 		$<entry>$ = new table_entry; 
									$<entry>$->type = new_basic_type(CHR); 
									$<entry>$->type->value = (int)$<charval>1; 
									$<entry>$->type->constnt = 1; 
									string s1(1, $<charval>1); 
									string s = "'" + s1 + "'";
									$<entry>$->name = s; 
							}

	| FLOAT_CONSTANT		{ 		$<entry>$ = new table_entry; 
									$<entry>$->type = new_basic_type(FLT); 
									$<entry>$->type->value = (int)$<floatval>1; 
									$<entry>$->type->constnt = 1;
									char *s = (char*)malloc(15*sizeof(char)); sprintf(s,"%f",$<floatval>1); 
									$<entry>$->name = s; 
							}

	| STRING_LITERAL
	;

postfix_expression
	: primary_expression  { $<entry>$ = $<entry>1; }
	| postfix_expression '[' expression ']'					{ if(char* s = type_check2("[]",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s);  }
	| IDENTIFIER '(' ')'							{ 
																table_entry_ptr temp = same_lookup(table_stack.top()->parent, $<stringval>1);
																if(temp==NULL) temp = same_lookup(table_stack.top(), $<stringval>1);
																
																if(char* s = type_check2("()",$<entry>$,temp,NULL)) yyerror3(s);
																else
																{
																	emit(V, "call",temp->name);
																	emit(V, "pop_ret_value", $<entry>$->name);
																} 
															}

	| IDENTIFIER '(' argument_expression_list ')' 	{ 																
																table_entry_ptr temp = same_lookup(table_stack.top()->parent, $<stringval>1, $<entry>3->type);
																if(temp==NULL) temp = same_lookup(table_stack.top(), $<stringval>1, $<entry>3->type);
																if(char* s = type_check2("()",$<entry>$,temp,$<entry>3)) yyerror3(s);
																else
																{
																	for(int i=0; i<arg_list.size(); i++)
																	{
																		table_entry_ptr e = arg_list[i];
																		emit(V, "push_param", e->name);
																	}
																	arg_list.resize(0);
																	emit(V, "call", temp->name);
																	emit(V, "pop_ret_value", $<entry>$->name);
																}
															}

	| postfix_expression '.' IDENTIFIER 					{ if(char* s = type_check4(".",$<entry>$,$<entry>1,$<stringval>3)) yyerror3(s); }
	| postfix_expression PTR_OP IDENTIFIER 					{ if(char* s = type_check4("->",$<entry>$,$<entry>1,$<stringval>3)) yyerror3(s); }
	| postfix_expression INC_OP								{
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("+=",$<entry>$,$<entry>1, temp)) yyerror3(s);
															}
	| postfix_expression DEC_OP								{
																table_entry_ptr temp = new table_entry; 
																temp->type = new_basic_type(INTEGER); 
																temp->type->constnt = 1;
																temp->type->value = 1;
																temp->name = "1";
																if(char* s = type_check("-=",$<entry>$,$<entry>1, temp)) yyerror3(s);
															}
	| error '[' {yyerror2("expecting expression");} expression ']'
	| error '(' {yyerror2("expecting expression");} ')'
	| error '(' {yyerror2("expecting expression");} argument_expression_list ')'
	| error '.' {yyerror2("expecting expression");} IDENTIFIER
	| error PTR_OP {yyerror2("expecting expression");} IDENTIFIER
	| error INC_OP {yyerror2("expecting expression");}
	| error DEC_OP {yyerror2("expecting expression");}
	;

argument_expression_list
	: assignment_expression			{$<entry>$ = $<entry>1; arg_list.push_back($<entry>$);}
	| argument_expression_list ',' assignment_expression    {
																arg_list.push_back($<entry>3);
																$<entry>$ = new table_entry; 
																$<entry>$->type = new_cartesian_type($<entry>1->type, $<entry>3->type); 
															}
	| error ',' {yyerror2("expecting expression");} assignment_expression
	;

unary_expression
	: postfix_expression   { $<entry>$ = $<entry>1; }
	| INC_OP unary_expression 
							{ 
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER); 
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("+=",$<entry>$,$<entry>2, temp)) yyerror3(s);
							}
	| DEC_OP unary_expression
							{
								table_entry_ptr temp = new table_entry; 
								temp->type = new_basic_type(INTEGER);
								temp->type->constnt = 1;
								temp->type->value = 1;
								temp->name = "1";
								if(char* s = type_check("-=",$<entry>$,$<entry>2, temp)) yyerror3(s);
							}
	| unary_operator cast_expression
							{
								if(!strcmp($<stringval>1, "!"))
								{
									table_entry_ptr temp = new table_entry; 
									temp->type = new_basic_type(INTEGER); 
									temp->type->constnt = 1;
									temp->type->value = 0;
									temp->name = "0";
									if(char* s = type_check("==",$<entry>$,$<entry>2, temp)) yyerror3(s);								
								}
								else if(!strcmp($<stringval>1, "-"))
								{
									table_entry_ptr temp = new table_entry; 
									temp->type = new_basic_type(INTEGER); 
									temp->type->constnt = 1;
									temp->type->value = -1;
									temp->name = "-1";
									if(char* s = type_check("*=",$<entry>$,$<entry>2, temp)) yyerror3(s);
								}
								else if(!strcmp($<stringval>1, "*"))
								{
									if(char* s = type_check3("*",$<entry>$,$<entry>2)) yyerror3(s);
								}
								else if(!strcmp($<stringval>1, "&"))
								{
									if(char* s = type_check3("&",$<entry>$,$<entry>2)) yyerror3(s);
									//char temp_name[12];
									//strcpy(temp_name, )
								}
								else if(!strcmp($<stringval>1, "~"))
								{
									if(char* s = type_check3("~",$<entry>$,$<entry>2)) yyerror3(s);
								}
								else if(!strcmp($<stringval>1, "+"))
								{
									table_entry_ptr temp = new table_entry; 
									temp->type = new_basic_type(INTEGER); 
									temp->type->constnt = 1;
									temp->type->value = 1;
									temp->name = "+1";
									if(char* s = type_check("*=",$<entry>$,$<entry>2, temp)) yyerror3(s);
								}
								else
								{
									$<entry>$ = $<entry>2;
								}
							}
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'	{ $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "&"); }
	| '*'	{ $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "*"); }
	| '+'	{ $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "+"); }
	| '-'	{ $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "-"); }
	| '!'	{ $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "!"); }
	| '~'	{ $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "~"); }
	;

cast_expression
	: unary_expression   { $<entry>$ = $<entry>1; }
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression    { $<entry>$ = $<entry>1; }
	| multiplicative_expression '*' cast_expression 	{ if(char* s = type_check("*",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); } 
	| multiplicative_expression '/' cast_expression 	{ if(char* s = type_check("/",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| multiplicative_expression '%' cast_expression 	{ if(char* s = type_check("%",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error '*' {yyerror2("expecting expression");} cast_expression
	| error '/' {yyerror2("expecting expression");} cast_expression
	| error '%' {yyerror2("expecting expression");} cast_expression
	;

additive_expression
	: multiplicative_expression   { $<entry>$ = $<entry>1; }
	| additive_expression '+' multiplicative_expression 	{ if(char* s = type_check("+",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| additive_expression '-' multiplicative_expression 	{ if(char* s = type_check("-",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error '+' {yyerror2("expecting expression");} multiplicative_expression
	| error '-' {yyerror2("expecting expression");} multiplicative_expression
	;

shift_expression
	: additive_expression       { $<entry>$ = $<entry>1; }
	| shift_expression LEFT_OP additive_expression 		{ if(char* s = type_check("<<",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| shift_expression RIGHT_OP additive_expression 	{ if(char* s = type_check(">>",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error LEFT_OP {yyerror2("expecting expression");} additive_expression
	| error RIGHT_OP {yyerror2("expecting expression");} additive_expression
	;

relational_expression
	: shift_expression        { $<entry>$ = $<entry>1; }
	| relational_expression '<' shift_expression		{ if(char* s = type_check("<",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| relational_expression '>' shift_expression		{ if(char* s = type_check(">",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| relational_expression LE_OP shift_expression 		{ if(char* s = type_check("<=",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| relational_expression GE_OP shift_expression 		{ if(char* s = type_check(">=",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error '<' {yyerror2("expecting expression");} shift_expression
	| error '>' {yyerror2("expecting expression");} shift_expression
	| error LE_OP {yyerror2("expecting expression");} shift_expression
	| error GE_OP {yyerror2("expecting expression");} shift_expression	
	;

equality_expression
	: relational_expression     { $<entry>$ = $<entry>1; }
	| equality_expression EQ_OP relational_expression 	{ if(char* s = type_check("==",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| equality_expression NE_OP relational_expression 	{ if(char* s = type_check("!=",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error EQ_OP {yyerror2("expecting expression");} relational_expression
	| error NE_OP {yyerror2("expecting expression");} relational_expression
	;

and_expression
	: equality_expression       { $<entry>$ = $<entry>1; }
	| and_expression '&' equality_expression    { if(char* s = type_check("&",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error '&' {yyerror2("expecting expression");} equality_expression
	;

exclusive_or_expression
	: and_expression            { $<entry>$ = $<entry>1; }
	| exclusive_or_expression '^' and_expression    { if(char* s = type_check("^",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error '^' {yyerror2("expecting expression");} and_expression
	;

inclusive_or_expression
	: exclusive_or_expression    { $<entry>$ = $<entry>1; }
	| inclusive_or_expression '|' exclusive_or_expression   { if(char* s = type_check("|",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error '|' {yyerror2("expecting expression");} exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression      
								{ 
									$<entry>$ = $<entry>1; 
									$<entry>$->isbool=0; 
								}

	| logical_and_expression AND_OP logical_and_expressionM inclusive_or_expression
	  						{
	  							$<entry>$ = $<entry>4;
	  							$<entry>$->falselist.insert($<entry>$->falselist.end(), $<entry>1->falselist.begin(),$<entry>1->falselist.end() );
	  						}
	| error AND_OP {yyerror2("expecting logical expression");} inclusive_or_expression
	;
logical_and_expressionM	: {
								table_entry_ptr e1 = $<entry>-1;
								e1->falselist.push_back(code_line);
								emit(V, "if(", e1->name, "== 0) goto");
								backpatch(V,e1->truelist,code_line);
						} 
	;

logical_or_expression
	: logical_and_expression        { $<entry>$ = $<entry>1;  }
	| logical_or_expression OR_OP 
							{
								table_entry_ptr e1 = $<entry>1;
								e1->truelist.push_back(code_line);
								emit(V, "if(", e1->name, "!= 0) goto");
								backpatch(V,e1->falselist,code_line);
							} 
	  logical_and_expression
	  						{
	  							$<entry>$ = $<entry>4;
	  							$<entry>$->truelist.insert($<entry>$->truelist.end(), $<entry>1->truelist.begin(),$<entry>1->truelist.end() );
	  						}
	| error OR_OP {yyerror2("expecting logical expression");} logical_and_expression
	;

conditional_expression  
	: logical_or_expression      { $<entry>$ = $<entry>1; }
	| logical_or_expression '?' conditional_expression_mark1 expression ':' conditional_expression_mark2 conditional_expression 
								 {
								 	char *name = (char*)malloc(10*sizeof(char));
									sprintf(name, "%s%d", "t-", count);
									$<entry>$ = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
									count++;

									$<entry>$->truelist = merge_list($<entry>4->truelist, $<entry>7->truelist);
									$<entry>$->falselist = merge_list($<entry>4->falselist, $<entry>7->falselist);

									emit(V,name,"=",$<entry>7->name);

								 }
	;
conditional_expression_mark1 :	{
									table_entry_ptr exp = $<entry>-1;
									exp->falselist.push_back(code_line);
									emit(V, "if(", exp->name, "== 0) goto");	
									backpatch(V, exp->truelist, code_line);
								}
							 ;

conditional_expression_mark2 : {
									table_entry_ptr exp = $<entry>-4;
									table_entry_ptr s1 = $<entry>-1;

								 	char *name = (char*)malloc(10*sizeof(char));
									sprintf(name, "%s%d", "t-", count);
									emit(V,name,"=",s1->name);

									s1->truelist.push_back(code_line);
									emit(V, "if(", name, "== 0) goto");	

									s1->falselist.push_back(code_line);
									emit(V, "if(", name, "!= 0) goto");

									backpatch(V, exp->falselist, code_line);	
							   }
							 ; 


assignment_expression
	: conditional_expression     { $<entry>$ = $<entry>1; }
	| unary_expression assignment_operator assignment_expression { if(char* s = type_check($<stringval>2,$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| error assignment_operator {yyerror2("lvalue required as left operand of assignment");} assignment_expression

	;

assignment_operator
	: '='
	| MUL_ASSIGN    { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "*="); }
	| DIV_ASSIGN { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "/="); }
	| MOD_ASSIGN  { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "%="); }
	| ADD_ASSIGN { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "+="); }
	| SUB_ASSIGN  { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "-="); }
	| LEFT_ASSIGN  { $<stringval>$ = (char*)malloc(4*sizeof(char)); sprintf($<stringval>$, "<<="); }
	| RIGHT_ASSIGN  { $<stringval>$ = (char*)malloc(4*sizeof(char)); sprintf($<stringval>$, ">>="); }
	| AND_ASSIGN  { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "&="); }
	| XOR_ASSIGN   { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "^="); }
	| OR_ASSIGN   { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "|="); }
	;

expression
	: assignment_expression        { $<entry>$ = $<entry>1;}
	| expression ',' assignment_expression
	| error ',' {yyerror2("expecting expression");} assignment_expression
	;

constant_expression
	: conditional_expression 	
	;

declaration
	: declaration_specifiers ';' { $<type>$ = $<type>1;}
	| declaration_specifiers init_declarator_list ';' { $<type>$ = $<type>2;}
	| IDENTIFIER IDENTIFIER ';'
	| asm_declaration
	;

asm_declaration
	: ASM '(' STRING_LITERAL ')' ';'
	;

declaration_specifiers
	: storage_class_specifier    { $<type>$ = $<type>1;}
	| storage_class_specifier declaration_specifiers   { $<type>$ = merge_type($<type>1 , $<type>2);}
	| type_specifier      { $<type>$ = $<type>1;}
	| type_specifier declaration_specifiers   { $<type>$ = merge_type($<type>1 , $<type>2);}
	| type_qualifier       { $<type>$ = $<type>1;}
	| type_qualifier declaration_specifiers   { $<type>$ = merge_type($<type>1 , $<type>2);}
	;

init_declarator_list
	: init_declarator      { $<type>$ = $<type>1; }
	| init_declarator_list ',' init_declarator_listM init_declarator    { $<type>$ = $<type>1;}
	| error ',' {yyerror2("expecting declarator");} init_declarator
	;
init_declarator_listM : {$<type>$ = $<type>-2;};

init_declarator
	: declarator      { $<type>$ = $<type>1;}
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN      { $<type>$ = new_basic_type(EXTRN); }
	| STATIC      { $<type>$ = new_basic_type(STAT); }
	| AUTO
	| REGISTER    { $<type>$ = new_basic_type(REGIS); }
	;

type_specifier
	: VOID    { $<type>$ = new_basic_type(VOD); }
	| CHAR    { $<type>$ = new_basic_type(CHR); }
	| SHORT   { $<type>$ = new_basic_type(SHORTER); }
	| INT     { $<type>$ = new_basic_type(INTEGER); }
	| LONG    { $<type>$ = new_basic_type(LONGER); }
	| FLOAT   { $<type>$ = new_basic_type(FLT); }
	| DOUBLE  { $<type>$ = new_basic_type(DBL); }
	| SIGNED   { $<type>$ = new_basic_type(SIGN); }
	| UNSIGNED  { $<type>$ = new_basic_type(UNSIGN); }
	| struct_or_union_specifier { $<type>$ = $<type>1; }
	| enum_specifier
	| TYPE_NAME
	| class_specifier
	;

class_key
    : CLASS
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' mk_tbl2 struct_declaration_list '}'   
									{
										table_ptr t1 = table_stack.top();
										table_stack.pop(); offset_stack.pop();
										if(same_lookup1(struct_namespace,$<stringval>1))
										{
											char* error = (char *) malloc (100 * sizeof(char));
											sprintf(error, "%s%s%s","Multiple declarations for structure or union \"", $<stringval>1, "\"");
											yyerror3(error);
											$<type>$ = new_basic_type(ERROR); 
										}
										else
										{
											$<type>$ = new_struct_type($<type>5, $<stringval>2) ;
											enter_proc(struct_namespace, $<stringval>2, $<type>$, t1);
											t1->scope = table_stack.top()->name;
										}
									}

	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER	{
										if(lookup(struct_namespace, $<stringval>2))
										{
											$<type>$ = new_struct_type(lookup(struct_namespace, $<stringval>2)->type, $<stringval>2) ;
										}
										else
										{
											char* error = (char *) malloc (100 * sizeof(char));
											sprintf(error, "%s%s%s","Undeclared structure \"", $<stringval>2, "\"");
											yyerror3(error);
											$<type>$ = new_basic_type(ERROR);
										}
									}
	;
mk_tbl2 : { table_ptr t1 = mktable(); table_stack.push(t1); offset_stack.push(0);} ;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list     { $<type>$ = merge_type($<type>1 , $<type>2);}
	| type_specifier    { $<type>$ = $<type>1;}
	| type_qualifier specifier_qualifier_list     { $<type>$ = merge_type($<type>1 , $<type>2);}
	| type_qualifier    { $<type>$ = $<type>1;}
	;

struct_declarator_list
	: struct_declarator                                 {$<type>$ = $<type>1;}
	| struct_declarator_list ',' struct_declarator    {$<type>$ = new_cartesian_type($<type>1,$<type>3); }
	| error ',' {yyerror2("expecting struct declarator");} struct_declarator
	;

struct_declarator
	: declarator        {$<type>$ = $<type>1;}
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	| error ',' {yyerror2("expecting enumerator");} enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST       { $<type>$ = new_basic_type(CONSTNT); }
	| VOLATILE		{ $<type>$ = new_basic_type(VOLAT); }
	;

declarator
	: pointer direct_declarator   {$<type>$ = $<type>2; }
	| direct_declarator    {$<type>$ = $<type>1; }
	;

direct_declarator
	: IDENTIFIER  	{ 
						if(same_lookup1(table_stack.top(),$<stringval>1))
						{
							char* error = (char *) malloc (100 * sizeof(char));
							sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
							yyerror3(error);
							$<type>$ = new_basic_type(ERROR);
						}
						else
						{
							enter(table_stack.top(), $<stringval>1, $<type>0, 0 );
							$<type>$ = $<type>0;
						}
					} 
	| '(' declarator ')'
	| IDENTIFIER '[' constant_expression ']'    {	
													if(same_lookup1(table_stack.top(),$<stringval>1))
													{
														char* error = (char *) malloc (100 * sizeof(char));
														sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
														yyerror3(error);
														$<type>$ = new_basic_type(ERROR);
													}
													else
													{
														$<type>$ = new_array_type($<type>0, $<type>3->value);
														enter(table_stack.top(), $<stringval>1, $<type>$, 0 );
													}	
												}
	| IDENTIFIER '[' ']'  	{
								if(same_lookup1(table_stack.top(),$<stringval>1))
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
									yyerror3(error);
									$<type>$ = new_basic_type(ERROR);
								}
								else
								{
									$<type>$ = new_pointer_type($<type>0);
									enter(table_stack.top(), $<stringval>1, $<type>$, 0 );
								}
							}

	| IDENTIFIER '(' mk_tbl parameter_type_list ')'  
							{ 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								table_entry_ptr e = same_lookup(table_stack.top(),$<stringval>1, $<type>4);
								if(e != NULL && !e->proc_decl)
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
									yyerror3(error);
									$<type>$ = new_basic_type(ERROR);
									table_stack.push(t1); offset_stack.push(0);
								}
								else if( e != NULL && e->proc_decl)
								{
									$<type>$ = new_function_type($<type>4,$<type>0);
									if(type_compare(e->type, $<type>$))
									{
										table_entry_ptr ne = enter_proc(table_stack.top(), $<stringval>1, $<type>$, t1);
										if(e==NULL)ne->proc_decl=0;
										t1->name.append($<stringval>1);
										t1->scope = t1->name;
										table_stack.push(t1); offset_stack.push(0);
									}
									else
									{
										char* error = (char *) malloc (100 * sizeof(char));
										sprintf(error, "%s%s%s","Declaration and definition do not match for identifier \"", $<stringval>1, "\"");
										yyerror3(error);
										$<type>$ = new_basic_type(ERROR);
										table_stack.push(t1); offset_stack.push(0);
									}
								}
								else
								{
									$<type>$ = new_function_type($<type>4,$<type>0);
									table_entry_ptr ne = enter_proc(table_stack.top(), $<stringval>1, $<type>$, t1);
									if(e==NULL)ne->proc_decl=0;
									t1->name.append($<stringval>1);
									t1->scope = t1->name;
									table_stack.push(t1); offset_stack.push(0);
								}
							}

	| IDENTIFIER '(' mk_tbl  identifier_list ')'
	| IDENTIFIER '(' mk_tbl ')'  
							{ 
								table_ptr t1 = table_stack.top();
								table_stack.pop(); offset_stack.pop();
								type_ptr t_notype = new_basic_type(NOTYPE);
								table_entry_ptr e = same_lookup(table_stack.top(),$<stringval>1, t_notype);
								if( (e != NULL)? !e->proc_decl : 0 )
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
									yyerror3(error);
									$<type>$ = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); offset_stack.push(0);
								}
								else if( e != NULL && e->proc_decl)
								{
									$<type>$ = new_function_type(NULL,$<type>0);
									if(type_compare(e->type, $<type>$))
									{
										table_entry_ptr ne = enter_proc(table_stack.top(), $<stringval>1, $<type>$, t1);
										if(e==NULL)ne->proc_decl=0;
										t1->name.append($<stringval>1);
										t1->scope = t1->name;
										table_stack.push(t1); offset_stack.push(0);
									}
									else
									{
										char* error = (char *) malloc (100 * sizeof(char));
										sprintf(error, "%s%s%s","Declaration and definition do not match for identifier \"", $<stringval>1, "\"");
										yyerror3(error);
										$<type>$ = new_basic_type(ERROR);
									}
								}
								else
								{
									$<type>$ = new_function_type(NULL,$<type>0);
									table_entry_ptr ne = enter_proc(table_stack.top(), $<stringval>1, $<type>$, t1);
									if(e==NULL)ne->proc_decl=0;
									t1->name.append($<stringval>1);
									t1->scope = t1->name;
									table_stack.push(t1); offset_stack.push(0);
								}
							}
	| error '[' {yyerror2("expecting declarator");} ']'
	| error '(' {yyerror2("expecting declarator");} ')'
	;

pointer
	: '*' {$<type>$ = new_pointer_type($<type>0);}
	| '*' type_qualifier_list
	| '*' pointerM pointer {$<type>$ = new_pointer_type($<type>3);}
	| '*' type_qualifier_list pointer 
	;
pointerM : {$<type>$ = $<type>-1;} ;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list    {$<type>$ = $<type>1;}
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration     {$<type>$ = $<type>1;}
	| parameter_list ',' parameter_declaration    {$<type>$ = new_cartesian_type($<type>1,$<type>3); }
	| error ',' {yyerror2("expecting parameter");} parameter_declaration
	;

parameter_declaration
	: declaration_specifiers parameter_declaration_M declarator     {$<type>$ = $<type>2;}
	| declaration_specifiers parameter_declaration_M abstract_declarator
	| declaration_specifiers parameter_declaration_M    {$<type>$ = $<type>1;}
	;
parameter_declaration_M : {$<type>$ = $<type>0; $<type>$->param=1;} ;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	| error ','{yyerror2("expecting identifier name");} IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement     {$<entry>$ = $<entry>1;}
	| statementm compound_statement    { 
											$<entry>$ = $<entry>2;
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}

	| expression_statement  {$<entry>$ = $<entry>1;}
	| statementm selection_statement   {
											$<entry>$ = $<entry>2; 
											backpatch(V,$<entry>$->nextlist,code_line);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
	| statementm iteration_statement   {
											$<entry>$ = $<entry>2; 
											backpatch(V,$<entry>$->nextlist,code_line);
											table_ptr t = table_stack.top(); 
											table_stack.pop();
											offset_stack.pop(); 
											copy_table_content(t,table_stack.top());
										}
	| jump_statement        {$<entry>$ = $<entry>1;}
	| declaration    { if($<type>1->info==FUNCTION){table_stack.pop();offset_stack.pop();} $<entry>$ = new table_entry;}
	;

statementm : { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0); };

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' labeled_statement_m statement 
										{
											$<entry>$ = $<entry>5;
											int l = $<intval>4;
											$<entry>5->labellist.push_back(l);
											char *name = (char*)malloc(15*sizeof(char));

											sprintf(name, "%d",$<entry>2->type->value);
											
											V[l-100]->label = name;
										}
	| DEFAULT ':' labeled_statement_m statement 
										{
											$<entry>$ = $<entry>4;
											int l = $<intval>3;
											$<entry>4->labellist.push_back(l);
											V[l-100]->label = "default";
										}
	;
labeled_statement_m : { $<intval>$ = code_line;}
	;

compound_statement
	: '{' '}' {$<entry>$ = new table_entry;}
	| '{' statement_list '}' {$<entry>$ = $<entry>2; }
	| '{' statement_list error '}' {yyerror2("expecting semicolon ;");}
	| '{' error '}' {yyerror2("expecting semicolon ;");}
	;

declaration_list
	: declaration   { if($<type>1->info==FUNCTION){table_stack.pop();offset_stack.pop();} $<entry>$ = $<entry>1;}
	| declaration_list declaration   { if($<type>2->info==FUNCTION){table_stack.pop();offset_stack.pop();} $<entry>$ = $<entry>2;}
	;

statement_list
	: statement    
									{
										$<entry>$ = $<entry>1; 
									}

	| statement_list statement   	{
										$<entry>$ = new table_entry;
										
										if($<entry>2 )
										{
											$<entry>$->breaklist.insert($<entry>$->breaklist.end(),$<entry>2->breaklist.begin(), $<entry>2->breaklist.end());
											$<entry>$->contlist.insert($<entry>$->contlist.end(),$<entry>2->contlist.begin(), $<entry>2->contlist.end());
										}

										if($<entry>1)
										{
											$<entry>$->breaklist.insert($<entry>$->breaklist.end(),$<entry>1->breaklist.begin(), $<entry>1->breaklist.end());
											$<entry>$->contlist.insert($<entry>$->contlist.end(),$<entry>1->contlist.begin(), $<entry>1->contlist.end());
										}

									}
	;

expression_statement
	: ';'
	| expression ';'  {$<entry>$ = $<entry>1; }
	;

selection_statement
	: IF '(' expression ')' mark1 statement       
										{
											$<entry>$ = new table_entry; 

											$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>3->falselist.begin(), $<entry>3->falselist.end());

											$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>6->nextlist.begin(), $<entry>6->nextlist.end());

											$<entry>$->breaklist.insert($<entry>$->breaklist.end(), $<entry>6->breaklist.begin(), $<entry>6->breaklist.end());

											$<entry>$->contlist.insert($<entry>$->contlist.end(), $<entry>6->contlist.begin(), $<entry>6->contlist.end());

										}  
	| IF '(' expression ')' mark1 statement ELSE mark2 statement       
										{
											$<entry>$ = new table_entry; 

											$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>3->falselist.begin(), $<entry>3->falselist.end());

											$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>6->nextlist.begin(), $<entry>6->nextlist.end());

											$<entry>$->breaklist.insert($<entry>$->breaklist.end(), $<entry>6->breaklist.begin(), $<entry>6->breaklist.end());

											$<entry>$->contlist.insert($<entry>$->contlist.end(), $<entry>6->contlist.begin(), $<entry>6->contlist.end());

											$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>9->nextlist.begin(), $<entry>9->nextlist.end());

											$<entry>$->breaklist.insert($<entry>$->breaklist.end(), $<entry>9->breaklist.begin(), $<entry>9->breaklist.end());

											$<entry>$->contlist.insert($<entry>$->contlist.end(), $<entry>9->contlist.begin(), $<entry>9->contlist.end());

										}
	| SWITCH '(' expression ')' smark statement 
						{

							$<entry>$ = new table_entry;
							$<entry>$->nextlist.push_back(code_line);
							emit(V, "goto");



							backpatch(V, $<entry>5->nextlist, code_line);

							table_entry_ptr s = $<entry>6;
							table_entry_ptr e = $<entry>3;
							for(int i=0; i < s->labellist.size(); i++)
							{
								if(V[s->labellist[i]-100]->label == "default")
								emit(V, "goto");
								else
								emit(V, "if(", e->name,"==",V[s->labellist[i]-100]->label,") goto");
								V[code_line-101]->goto_line = s->labellist[i];
								V[s->labellist[i]-100]->label = "";
							}

							$<entry>$->nextlist.insert($<entry>$->nextlist.end(), s->breaklist.begin(), s->breaklist.end());
						}
	;
smark : {
			$<entry>$ = new table_entry;
			$<entry>$->nextlist.push_back(code_line);
			emit(V, "goto");
		}
	;

mark1 : { 
			table_entry_ptr exp = $<entry>-1;
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0) goto");	
			backpatch(V, exp->truelist, code_line);
			exp->truelist.resize(0);
		} 
	 ; 
mark2 : 
		{ 
			table_entry_ptr exp = $<entry>-4;
			table_entry_ptr s1 = $<entry>-1;
			s1->nextlist.push_back(code_line);
			emit(V, "goto");	
			backpatch(V, exp->falselist, code_line);
			exp->falselist.resize(0);
		}
	  ;

iteration_statement
	: WHILE  mark3 '(' expression ')' mark4 statement 	{ 	
															$<entry>$ = new table_entry;   
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>4->falselist.begin(), $<entry>4->falselist.end() );
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>7->breaklist.begin(), $<entry>7->breaklist.end() );
															$<entry>7->nextlist.push_back(code_line);
															emit(V, "goto");
															backpatch(V, $<entry>7->nextlist, $<intval>2);
															backpatch(V, $<entry>7->contlist, $<intval>2);
														}
	| DO mark3 statement WHILE  mark5 '(' expression ')' ';' 	{
																	$<entry>$ = new table_entry;   
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>7->falselist.begin(), $<entry>7->falselist.end() );
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>3->breaklist.begin(), $<entry>3->breaklist.end() );
																	$<entry>7->truelist.push_back(code_line);
																	emit(V, "if(", $<entry>7->name, "!= 0) goto");
																	backpatch(V, $<entry>7->truelist, $<intval>2);
																}
	| FOR '(' expression_statement mark3 expression_statement ')' mark4 statement 	{ 	

																						$<entry>$ = new table_entry;   
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>5->falselist.begin(), $<entry>5->falselist.end() );
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>8->breaklist.begin(), $<entry>8->breaklist.end() );
																						$<entry>8->nextlist.push_back(code_line);
																						emit(V, "goto");
																						backpatch(V, $<entry>8->nextlist, $<intval>4);
																						backpatch(V, $<entry>8->contlist, $<intval>4);

																					}
	| FOR '(' expression_statement mark3 expression_statement mark6 expression mark7 ')' mark8 statement 	
					{
								$<entry>$ = new table_entry; 
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>5->falselist.begin(), $<entry>5->falselist.end() );
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>11->breaklist.begin(), $<entry>11->breaklist.end() );
								$<entry>11->nextlist.push_back(code_line);
								emit(V, "goto");
								backpatch(V, $<entry>11->nextlist, $<intval>6);
								backpatch(V, $<entry>11->contlist, $<intval>6);
					}
	| FOR '(' declaration mark3 expression_statement mark6 expression mark7 ')' mark8 statement 	{
																										$<entry>$ = new table_entry;
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>5->falselist.begin(), $<entry>5->falselist.end() );
								$<entry>$->nextlist.insert($<entry>$->nextlist.end(), $<entry>11->breaklist.begin(), $<entry>11->breaklist.end() );
																										$<entry>11->nextlist.push_back(code_line);
																										emit(V, "goto");
																										backpatch(V, $<entry>11->nextlist, $<intval>6);
																										backpatch(V, $<entry>11->contlist, $<intval>6);
																									}
	;

mark3 : { 
			$<intval>$ = code_line;
		} 
	 ;

mark4 : {
			table_entry_ptr exp = $<entry>-1;
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			backpatch(V, exp->truelist, code_line);	
		}
	;

mark5 : {
			table_entry_ptr s = $<entry>-1;
			backpatch(V, s->nextlist, code_line);
			backpatch(V, s->contlist, code_line);	
		}
	;  

mark6 : {
			table_entry_ptr exp = $<entry>0;
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");
			exp->truelist.push_back(code_line);
			emit(V, "goto");
			$<intval>$ = code_line;	
		}
	;

mark7 : {
			table_entry_ptr s = $<entry>0;
			int val = $<intval>-3;
			s->nextlist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, s->nextlist, val);
		}
	;

mark8 : {
			table_entry_ptr exp = $<entry>-4;
			backpatch(V, exp->truelist, code_line);	
		}
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'				{
									$<entry>$ = new table_entry; 
									$<entry>$->contlist.push_back(code_line);
									emit(V, "goto");
								}
	| BREAK ';'					{
									$<entry>$ = new table_entry; 
									$<entry>$->breaklist.push_back(code_line);
									emit(V, "goto");
								}
	| RETURN ';'				{	$<entry>$ = new table_entry; emit(V,"return"); }
	| RETURN expression ';'		{	$<entry>$ = $<entry>2; emit(V,"return", $<entry>2->name);}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration   { 
						if($<type>1->info==FUNCTION)
						{
							table_ptr t1 = table_stack.top();
							table_stack.pop();offset_stack.pop();
							char *nam = strdup(t1->name.c_str());
							
							table_entry_ptr e = same_lookup(table_stack.top(),nam, $<type>1->p1);
							
							if(e!=NULL && e->proc_decl)
							{
								char* error = (char *) malloc (100 * sizeof(char));
								sprintf(error, "%s%s%s","Multiple declarations for identifier \"", nam, "\"");
								yyerror3(error);
							}
							else e->proc_decl=1;

						} 
					}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
															{
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																type_ptr temp = $<type>2;
																table_entry_ptr e=same_lookup(table_stack.top(),nam, temp->p1);
																if(e)e->proc_decl=0;
															}
	| declaration_specifiers declarator compound_statement  
															{
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																type_ptr temp = $<type>2;
																table_entry_ptr e=same_lookup(table_stack.top(),nam, temp->p1);
																if(e)e->proc_decl=0;
															}
	;


mk_tbl : { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);} ;

class_specifier
	: class_head '{' member_list '}'
    | class_head '{' '}'
    ;

class_head
    : class_key base_spec
    | class_key class_name base_spec
    | class_key class_name
    ;

member_list
    : member_declaration member_list
    | member_declaration
    | access_specifier ':' member_list
    | access_specifier ':'

member_declaration
    : declaration_specifiers member_declarator_list ';'
    | member_declarator_list ';'
    | declaration_specifiers ';'
    | ';'
    | function_definition
    ;

member_declarator_list
    : member_declarator
    | member_declarator_list ',' member_declarator
    ;

member_declarator
    : declarator pure_specifier
    | declarator
    ;

pure_specifier
    : '=' INTEGER_CONSTANT
    ;

base_spec
    : ':' base_list
    ;

base_list
    : base_specifier
    | base_list ',' base_specifier
    ;

base_specifier
    : class_name
    | access_specifier class_name
    ;

access_specifier
    : PRIVATE
    | PROTECTED
    | PUBLIC
    ;

%%



void yyerror(const char *s)
{
	fflush(stdout);
	printf("%s at line no : %d \n", s, yylineno);
}

void yyerror2(const char *s)
{
	fflush(stdout);
	printf("\t%s before token ( %s )\n", s, yylval.stringval);
}
void yyerror3(char *s)
{
	fflush(stdout);
	printf("Semantic Error in line no : %d \n \t%s\n", yylineno, s);
}

void warning(const char *s)
{
	fflush(stdout);
	printf("Line No : %d [ WARNING ! ] \n \t%s before token ( %s )\n", yylineno, s, yylval.stringval);

}
