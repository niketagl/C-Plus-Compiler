%{

extern int yylex();
void yyerror(const char*);
void yyerror2(const char*);
void yyerror3(char*);
void warning(const char *s);

#include <stdio.h>

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
	extern stack < table_ptr > table_stack;
	extern int code_line;
	extern vector < code_ptr > V;
}

%union{
	int intval;
	char *stringval;
	type_ptr type;
	table_entry_ptr entry;
}

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
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
	: IDENTIFIER     { $<entry>$ = lookup(table_stack.top(), $<stringval>1); }
	| CONSTANT    
	| STRING_LITERAL
	| '(' expression ')'  { $<entry>$ = $<entry>2; }
	;

postfix_expression
	: primary_expression  { $<entry>$ = $<entry>1; }
	| postfix_expression '[' expression ']'	{ if ( $<entry>3->type->info != INTEGER ) yyerror3("expecting integer expression");  }
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
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
	| shift_expression LEFT_OP additive_expression 		
	| shift_expression RIGHT_OP additive_expression 	
	| error LEFT_OP {yyerror2("expecting expression");} additive_expression
	| error RIGHT_OP {yyerror2("expecting expression");} additive_expression
	;

relational_expression
	: shift_expression        { $<entry>$ = $<entry>1; }
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	| error '<' {yyerror2("expecting expression");} shift_expression
	| error '>' {yyerror2("expecting expression");} shift_expression
	| error LE_OP {yyerror2("expecting expression");} shift_expression
	| error GE_OP {yyerror2("expecting expression");} shift_expression	
	;

equality_expression
	: relational_expression     { $<entry>$ = $<entry>1; }
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	| error EQ_OP {yyerror2("expecting expression");} relational_expression
	| error NE_OP {yyerror2("expecting expression");} relational_expression
	;

and_expression
	: equality_expression       { $<entry>$ = $<entry>1; }
	| and_expression '&' equality_expression
	| error '&' {yyerror2("expecting expression");} equality_expression
	;

exclusive_or_expression
	: and_expression            { $<entry>$ = $<entry>1; }
	| exclusive_or_expression '^' and_expression
	| error '^' {yyerror2("expecting expression");} and_expression
	;

inclusive_or_expression
	: exclusive_or_expression    { $<entry>$ = $<entry>1; }
	| inclusive_or_expression '|' exclusive_or_expression
	| error '|' {yyerror2("expecting expression");} exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression      { $<entry>$ = $<entry>1; }
	| logical_and_expression AND_OP inclusive_or_expression
	| error AND_OP {yyerror2("expecting logical expression");} inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression        { $<entry>$ = $<entry>1; }
	| logical_or_expression OR_OP logical_and_expression
	| error OR_OP {yyerror2("expecting logical expression");} logical_and_expression
	;

conditional_expression  
	: logical_or_expression      { $<entry>$ = $<entry>1; }
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression     { $<entry>$ = $<entry>1; }
	| unary_expression assignment_operator assignment_expression 
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	| error ',' {yyerror2("expecting expression");} assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';' { $<type>$ = $<type>1;}
	| declaration_specifiers init_declarator_list ';' { $<type>$ = $<type>1;}
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
	: init_declarator    
	| init_declarator_list ',' init_declarator_listM init_declarator   
	| error ',' {yyerror2("expecting declarator");} init_declarator
	;
init_declarator_listM : {$<type>$ = $<type>-2;};

init_declarator
	: declarator
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
	: VOID    { $<type>$ = new_basic_type(NOTYPE); }
	| CHAR    { $<type>$ = new_basic_type(CHR); }
	| SHORT   { $<type>$ = new_basic_type(SHORTER); }
	| INT     { $<type>$ = new_basic_type(INTEGER); }
	| LONG    { $<type>$ = new_basic_type(LONGER); }
	| FLOAT   { $<type>$ = new_basic_type(FLT); }
	| DOUBLE  { $<type>$ = new_basic_type(DBL); }
	| SIGNED   { $<type>$ = new_basic_type(SIGN); }
	| UNSIGNED  { $<type>$ = new_basic_type(UNSIGN); }
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

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
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	| error ',' {yyerror2("expecting struct declarator");} struct_declarator
	;

struct_declarator
	: declarator
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
	: IDENTIFIER  { enter(table_stack.top(), $<stringval>1, $<type>0, 0 );
					$<type>$ = $<type>0; } 
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'

	| IDENTIFIER '(' mk_tbl parameter_type_list ')'  
							{ 
								$<type>$ = new_function_type($<type>4,$<type>0); 
								table_ptr t1 = table_stack.top();
								table_stack.pop();
								enter_proc(table_stack.top(), $<stringval>1, $<type>$, t1);
								table_stack.push(t1);
							}

	| IDENTIFIER '(' mk_tbl  identifier_list ')'
	| IDENTIFIER '(' mk_tbl ')'  
							{ 
								$<type>$ = new_function_type(NULL,$<type>0); 
								table_ptr t1 = table_stack.top();
								table_stack.pop();
								enter_proc(table_stack.top(), $<stringval>1, $<type>$, t1);
								table_stack.push(t1);
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
	: declaration_specifiers declarator     {$<type>$ = $<type>2;}
	| declaration_specifiers abstract_declarator
	| declaration_specifiers     {$<type>$ = $<type>1;}
	;

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
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| declaration    { if($<type>1->info==FUNCTION)table_stack.pop(); }
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' statement_list error '}' {yyerror2("expecting semicolon ;");}
	| '{' error '}' {yyerror2("expecting semicolon ;");}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
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
	| declaration   {if($<type>1->info==FUNCTION)table_stack.pop();}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
															{table_stack.pop();}
	| declaration_specifiers declarator compound_statement  {table_stack.pop();}
	| declarator declaration_list compound_statement  		{table_stack.pop();}
	| declarator compound_statement 						{table_stack.pop();}   
	;


mk_tbl : { table_ptr t1 = mktable(table_stack.top()); table_stack.push(t1); } ;
	

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
	printf("Semantic Error in line no : %d \n \t%s before token ( %s )\n", yylineno, s, yylval.stringval);
}

void warning(const char *s)
{
	fflush(stdout);
	printf("Line No : %d [ WARNING ! ] \n \t%s before token ( %s )\n", yylineno, s, yylval.stringval);

}