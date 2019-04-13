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
	extern table_ptr class_namespace;
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

%token IDENTIFIER

%start translation_unit

%expect 1

%%

L 
    : PROCEDURE_LABEL
    | LINE_NO ':' THREE_AC
    | LINE_NO ':' 'end'
    ;

PROCEDURE_LABEL
    :'proc_id' INTEGER '<' IDENTIFIER '>'
    ;

THREE_AC   
    : ASSIGNMENT
    | JUMP
    | FUNCTION
    | POINTER
    | INDEXED_ASSIGNMENT
    ;

ASSIGNMENT 
    : IDENTIFIER assignment_operator IDENTIFIER op IDENTIFIER
    | IDENTIFIER assignment_operator op IDENTIFIER
    | IDENTIFIER assignment_operator IDENTIFIER
    | IDENTIFIER assignment_operator cast_expression '(' IDENTIFIER ')'
    ;

cast_expression
    : 'cast_to_int'
    | 'cast_to_float'
    | 'cast_to_double'
    ;

JUMP
    : 'if' '(' IDENTIFIER op IDENTIFIER ')' 'goto' LABEL
    | 'if' IDENTIFIER 'goto' LABEL
    | 'goto' LABEL
    ;

FUNCTION    
    : 'push_param' IDENTIFIER
    | 'call' IDENTIFIER
    | 'return' IDENTIFIER
    ;

POINTER
    : IDENTIFIER assignment_operator '&' IDENTIFIER
    | IDENTIFIER assignment_operator '*' IDENTIFIER
    | '*' IDENTIFIER assignment_operator IDENTIFIER
    ;

INDEXED_ASSIGNMENT
    : IDENTIFIER assignment_operator '[' IDENTIFIER ']'
    | '[' IDENTIFIER ']' assignment_operator IDENTIFIER
    ;

assignment_operator
    : '='
    ;

op
    : op_type basic_op
    | basic_op
    ;

op_type
    : 'int'
    | 'real'
    | 'pointer'
    ;

basic_op
    : '+'
    | '-'
    | '/'
    | '*'
    | '%'
    | '<<'
    | '>>'
    | '&'
    | '~'
    | '|'
    | '^'
    | '<'
    | '>'
    | '<='
    | '>='
    | '=='
    | '!='
    | '='
    | '.'
    | '->'
    ;