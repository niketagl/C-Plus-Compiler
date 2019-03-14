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
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit

%expect 1

%%

primary_expression
	: IDENTIFIER   	{ 
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
	| INTEGER_CONSTANT		{ 		$<entry>$ = new table_entry; 
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
	| '(' expression ')'  { $<entry>$ = $<entry>2; }
	;

postfix_expression
	: primary_expression  { $<entry>$ = $<entry>1; }
	| postfix_expression '[' expression ']'					{ if(char* s = type_check2("[]",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s);  }
	| postfix_expression '(' ')'							{ if(char* s = type_check2("()",$<entry>$,$<entry>1,NULL)) yyerror3(s); }
	| postfix_expression '(' argument_expression_list ')' 	{ if(char* s = type_check2("()",$<entry>$,$<entry>1,$<entry>3)) yyerror3(s); }
	| postfix_expression '.' IDENTIFIER 					{ if(char* s = type_check4(".",$<entry>$,$<entry>1,$<stringval>3)) yyerror3(s); }
	| postfix_expression PTR_OP IDENTIFIER 					{ if(char* s = type_check4("->",$<entry>$,$<entry>1,$<stringval>3)) yyerror3(s); }
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| error '[' {yyerror2("expecting expression");} expression ']'
	| error '(' {yyerror2("expecting expression");} ')'
	| error '(' {yyerror2("expecting expression");} argument_expression_list ')'
	| error '.' {yyerror2("expecting expression");} IDENTIFIER
	| error PTR_OP {yyerror2("expecting expression");} IDENTIFIER
	| error INC_OP {yyerror2("expecting expression");}
	| error DEC_OP {yyerror2("expecting expression");}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	| error ',' {yyerror2("expecting expression");} assignment_expression
	;

unary_expression
	: postfix_expression   { $<entry>$ = $<entry>1; }
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
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
	: inclusive_or_expression      { $<entry>$ = $<entry>1;  }
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
	| logical_or_expression '?' expression ':' conditional_expression
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
	: conditional_expression 	{cout << $<entry>1->type->value << endl; }
	;

declaration
	: declaration_specifiers ';' { $<type>$ = $<type>1;}
	| declaration_specifiers init_declarator_list ';' { $<type>$ = $<type>2;}
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
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' mk_tbl2 struct_declaration_list '}'   
									{
										table_ptr t1 = table_stack.top();
										table_stack.pop(); offset_stack.pop();
										if(same_lookup(struct_namespace,$<stringval>1))
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
	| struct_or_union IDENTIFIER
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
						if(same_lookup(table_stack.top(),$<stringval>1))
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
													if(same_lookup(table_stack.top(),$<stringval>1))
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
								if(same_lookup(table_stack.top(),$<stringval>1))
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
								table_entry_ptr e = same_lookup(table_stack.top(),$<stringval>1);
								if( e != NULL && !e->proc_decl)
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
									yyerror3(error);
									$<type>$ = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); offset_stack.push(0);
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
								table_entry_ptr e = same_lookup(table_stack.top(),$<stringval>1);
								if( (e != NULL)? !e->proc_decl : 0 )
								{
									char* error = (char *) malloc (100 * sizeof(char));
									sprintf(error, "%s%s%s","Multiple declarations for identifier \"", $<stringval>1, "\"");
									yyerror3(error);
									$<type>$ = new_basic_type(ERROR);
									table_ptr temp = new table;
									table_stack.push(temp); offset_stack.push(0);
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
	| compound_statement    {$<entry>$ = $<entry>1;}
	| expression_statement  {$<entry>$ = $<entry>1;}
	| selection_statement   {$<entry>$ = $<entry>1;}
	| iteration_statement   {$<entry>$ = $<entry>1;}
	| jump_statement        {$<entry>$ = $<entry>1;}
	| declaration    { if($<type>1->info==FUNCTION){table_stack.pop();offset_stack.pop();} $<entry>$ = $<entry>1;}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}' {$<entry>$ = new table_entry;}
	| '{' statement_list '}' {$<entry>$ = $<entry>2;}
	| '{' statement_list error '}' {yyerror2("expecting semicolon ;");}
	| '{' error '}' {yyerror2("expecting semicolon ;");}
	;

declaration_list
	: declaration   { if($<type>1->info==FUNCTION){table_stack.pop();offset_stack.pop();} $<entry>$ = $<entry>1;}
	| declaration_list declaration   { if($<type>2->info==FUNCTION){table_stack.pop();offset_stack.pop();} $<entry>$ = $<entry>2;}
	;

statement_list
	: statement    {$<entry>$ = $<entry>1;}
	| statement_list statement   {$<entry>$ = $<entry>2;}
	;

expression_statement
	: ';'
	| expression ';'  {$<entry>$ = $<entry>1; }
	;

selection_statement
	: IF '(' expression ')' mark1 statement       {$<entry>$ = new table_entry; $<entry>$->nextlist = merge_list($<entry>3->falselist, $<entry>6->nextlist);}  
	| IF '(' expression ')' mark1 statement ELSE mark2 statement  
						{$<entry>$ = new table_entry; $<entry>$->nextlist = merge_list($<entry>9->falselist, $<entry>6->nextlist);}
	| SWITCH '(' expression ')' statement
	;

mark1 : { 
			table_entry_ptr exp = $<entry>-1;
			exp->falselist.push_back(code_line);
			emit(V, "if(", exp->name, "== 0 ) goto");	
			backpatch(V, exp->truelist, code_line);
		} 
	 ; 
mark2 : 
		{ 
			table_entry_ptr exp = $<entry>-4;
			table_entry_ptr s1 = $<entry>-1;
			s1->nextlist.push_back(code_line);
			emit(V, "goto");	
			backpatch(V, exp->falselist, code_line);
		}
	  ;

iteration_statement
	: WHILE  mark3 '(' expression ')' mark4 statement 	{ 	
															$<entry>$ = new table_entry;  
															$<entry>$->nextlist = $<entry>4->falselist; 
															$<entry>7->nextlist.push_back(code_line);
															emit(V, "goto");
															backpatch(V, $<entry>7->nextlist, $<intval>2);
														}
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
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

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
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
							table_entry_ptr e = same_lookup(table_stack.top(),nam);
							
							if(e->proc_decl)
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

																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
	| declaration_specifiers declarator compound_statement  
															{
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
	| declarator declaration_list compound_statement  		
															{
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
	| declarator compound_statement 						
															{
																table_ptr t1 = table_stack.top();
																table_stack.pop();offset_stack.pop();
																char *nam = strdup(t1->name.c_str());
																table_entry_ptr e=same_lookup(table_stack.top(),nam);
																if(e)e->proc_decl=0;
															}
	;


mk_tbl : { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); offset_stack.push(0);} ;
	

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
