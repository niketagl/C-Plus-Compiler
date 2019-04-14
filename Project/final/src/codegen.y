%{

extern int yylex();

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char yytext[];
extern int column;
extern int yylineno;


void yyerror(const char*);


%}

%code requires {
	#include "src/codegentac.h"
	#include <stack>
	#include <iostream>
	#include <vector>
	#include <string>
	using namespace std;
	
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;
}

%union{
	char charval;
	int intval;
	float floatval;
	char *stringval;
}

%token IDENTIFIER LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP PTR_OP INC_OP DEC_OP AND_OP OR_OP
%token INT REAL POINT
%token INTCAST FLOATCAST DOUBLECAST
%token END PROC_ID IF GOTO PUSH_PARAM CALL RETURN INTEGER_CONSTANT CHAR_CONSTANT FLOAT_CONSTANT
%token STRING_LITERAL FUN_NAME

%start translation_unit


%%

translation_unit
    : L translation_unit
    | L 
    ;

L 
    : PROCEDURE_LABEL
    | LINE_NO ':' THREE_AC
    | LINE_NO ':' END
    ;

LINE_NO
    : INTEGER
    ;

INTEGER
    : INTEGER_CONSTANT
    ;

PROCEDURE_LABEL
    : PROC_ID INTEGER FUN_NAME ':'
    ;

THREE_AC   
    : ASSIGNMENT
    | JUMP
    | FUNCTION
    | INDEXED_ASSIGNMENT
    ;

ASSIGNMENT 
    : IDENTIFIER assignment_operator IDENTIFIER op IDENTIFIER
                                                    {
                                                        if(!strcmp($<stringval>4, "int+"))
								                        {
                                                            emit2(V, "mov", "eax", "$<address>3");
                                                            emit2(V, "add", "eax", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "eax");
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            emit2(V, "movq", "rax", "$<address>3");
                                                            emit2(V, "addq", "rax", "$<address>5");
                                                            emit2(V, "movq", "$<address>1", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int-"))
								                        {
                                                            emit2(V, "mov", "eax", "$<address>3");
                                                            emit2(V, "sub", "eax", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "eax");
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            emit2(V, "movq", "rax", "$<address>3");
                                                            emit2(V, "subq", "rax", "$<address>5");
                                                            emit2(V, "movq", "$<address>1", "rax");
								                        }
                                                        // else if(!strcmp($<stringval>4, "int*"))
								                        // {
                                                        //     emit2(V, "mov", "eax", "$<address>3");
                                                        //     emit2(V, "imul", "eax", "$<address>5");
                                                        //     emit2(V, "mov", "$<address>1", "eax");
								                        // }
                                                        // else if(!strcmp($<stringval>4, "real*"))
								                        // {
                                                        //     emit2(V, "movq", "rax", "$<address>3");
                                                        //     emit2(V, "imulq", "$<address>5");
                                                        //     emit2(V, "movq", "$<address>1", "rax");
								                        // }
                                                        // else if(!strcmp($<stringval>4, "int/"))
								                        // {
                                                        //     emit2(V, "mov", "eax", "$<address>3");
                                                        //     emit2(V, "imul", "eax", "$<address>5");
                                                        //     emit2(V, "mov", "$<address>1", "eax");
								                        // }
                                                        // else if(!strcmp($<stringval>4, "real/"))
								                        // {
                                                        //     emit2(V, "movq", "rax", "$<address>3");
                                                        //     emit2(V, "idivq", $<address>5");
                                                        //     emit2(V, "movq", "$<address>1", "rdx");
								                        // }

                                                        
                                                    }
    | IDENTIFIER assignment_operator op IDENTIFIER
    | IDENTIFIER assignment_operator IDENTIFIER
    | IDENTIFIER assignment_operator cast_expression '(' IDENTIFIER ')'
    | IDENTIFIER assignment_operator INTEGER
    | IDENTIFIER assignment_operator FLOAT_CONSTANT
    | IDENTIFIER assignment_operator CHAR_CONSTANT
    | IDENTIFIER assignment_operator STRING_LITERAL
    ;

cast_expression
    : INTCAST
    | FLOATCAST
    | DOUBLECAST
    ;

JUMP
    : IF '(' IDENTIFIER op IDENTIFIER ')' GOTO LABEL
    | IF IDENTIFIER GOTO LABEL
    | GOTO LABEL
    ;

LABEL
    : LINE_NO
    ;

FUNCTION    
    : PUSH_PARAM IDENTIFIER
    | CALL IDENTIFIER
    | RETURN IDENTIFIER
    | RETURN INTEGER
    | RETURN CHAR_CONSTANT
    | RETURN FLOAT_CONSTANT
    | RETURN STRING_LITERAL
    ;

INDEXED_ASSIGNMENT
    : IDENTIFIER assignment_operator '[' IDENTIFIER ']'
    | '[' IDENTIFIER ']' assignment_operator IDENTIFIER
    ;

assignment_operator
    : '='
    ;

op
    : op_type basic_op      { $<stringval>$ = (char*)malloc(11*sizeof(char)); sprintf($<stringval>$, "%s%s", $<stringval>1 , $<stringval>2); }
    | basic_op              { $<stringval>$ = $<stringval>1; }
    ;

op_type
    : INT         { $<stringval>$ = (char*)malloc(8*sizeof(char)); sprintf($<stringval>$, "int"); }
    | REAL        { $<stringval>$ = (char*)malloc(8*sizeof(char)); sprintf($<stringval>$, "real"); }
    | POINT     { $<stringval>$ = (char*)malloc(8*sizeof(char)); sprintf($<stringval>$, "pointer"); }
    ;

basic_op
    : '+'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "+"); }
    | '-'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "-"); }
    | '/'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "/"); }
    | '*'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "*"); }
    | '%'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "%"); }
    | LEFT_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "<<"); }
    | RIGHT_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, ">>"); }
    | '&'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "&"); }
    | '~'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "~"); }
    | '|'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "|"); }
    | '^'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "^"); }
    | '<'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "<"); }
    | '>'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, ">"); }
    | LE_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "<="); }
    | GE_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, ">="); }
    | EQ_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "=="); }
    | NE_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "!="); }
    | '='       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "="); }
    | '.'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "."); }
    | PTR_OP      { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "->"); }
    | '?'       { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "?"); }
    | INC_OP    { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "++"); }
    | DEC_OP    { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "--"); }
    | AND_OP    { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "&&"); }
    | OR_OP     { $<stringval>$ = (char*)malloc(3*sizeof(char)); sprintf($<stringval>$, "||"); }
    ;

%%




void yyerror(const char *s)
{
	fflush(stdout);
	printf("%s at line no : %d \n", s, yylineno);
}

// Implicitly used emit2 function
// Memory location for identifier implicitly used as $<address>n
// Check op stringval calculation
/*
POINTER
    : IDENTIFIER assignment_operator '&' IDENTIFIER
    | IDENTIFIER assignment_operator '*' IDENTIFIER
    | '*' IDENTIFIER assignment_operator IDENTIFIER
    ;
*/