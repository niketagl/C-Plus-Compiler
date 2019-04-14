%{

extern int yylex();

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char yytext[];
extern int column;
extern int yylineno;


void yyerror(const char*);
bool check_long(char* a, char* b);
bool check_short(char* a, char* b);

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

%token ID LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP PTR_OP INC_OP DEC_OP AND_OP OR_OP
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
    : INTEGER_CONSTANT      {$<intval>$ = $<intval>1 ;}
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
IDENTIFIER
    : ID INTEGER    {$<intval>$ = $<intval>2 ;}
    ;

ASSIGNMENT 
    : IDENTIFIER assignment_operator IDENTIFIER op IDENTIFIER
                                                    {
                                                        
                                                        if(!strcmp($<stringval>4, "int+"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(check_short($<stringval>3, $<stringval>5)) prefix[0] =  ' ';
                                                            if(check_long($<stringval>3, $<stringval>5))
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, "$<address>3");
                                                            emit2(V, "add", reg, "$<address>5");
                                                            emit2(V, "mov", "$<address>1", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "add", "rax", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int-"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(check_short($<stringval>3, $<stringval>5)) prefix[0] =  ' ';
                                                            if(check_long($<stringval>3, $<stringval>5))
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, "$<address>3");
                                                            emit2(V, "sub", reg, "$<address>5");
                                                            emit2(V, "mov", "$<address>1", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "sub", "rax", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int*"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(check_short($<stringval>3, $<stringval>5)) prefix[0] =  ' ';
                                                            if(check_long($<stringval>3, $<stringval>5))
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, "$<address>3");
                                                            emit2(V, "mul", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real*"))
								                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "mul", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int/"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(check_short($<stringval>3, $<stringval>5)) prefix[0] =  ' ';
                                                            if(check_long($<stringval>3, $<stringval>5))
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            char regd[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            sprintf(regd, "%s%s", prefix, "dx");
                                                            emit2(V, "mov", reg, "$<address>3");
                                                            emit2(V, "mov", regd, "0x0");
                                                            emit2(V, "div", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real/"))
								                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "mov", "rdx", "0x0");
                                                            emit2(V, "div", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int%"))
								                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "mov", "rdx", "0x0");
                                                            emit2(V, "div", "$<address>5");
                                                            emit2(V, "mov", "$<address>1", "rdx");
								                        }
                                                        else if(!strcmp($<stringval>4, "int&"))
                                                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "mov", "rbx", "$<address>5");
                                                            emit2(V, "and", "rax", "rbx");
                                                            emit2(V, "mov", "$<address>1", "rbx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int|"))
                                                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "mov", "rbx", "$<address>5");
                                                            emit2(V, "or", "rax", "rbx");
                                                            emit2(V, "mov", "$<address>1", "rbx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int^"))
                                                        {
                                                            emit2(V, "mov", "rax", "$<address>3");
                                                            emit2(V, "mov", "rbx", "$<address>5");
                                                            emit2(V, "xor", "rax", "rbx");
                                                            emit2(V, "mov", "$<address>1", "rbx");
                                                        }
                                                        
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
// Implicitly used check_short, check_long function
// Memory location for identifier implicitly used as $<address>n
// Check op stringval calculation
/*
POINTER
    : IDENTIFIER assignment_operator '&' IDENTIFIER
    | IDENTIFIER assignment_operator '*' IDENTIFIER
    | '*' IDENTIFIER assignment_operator IDENTIFIER
    ;
*/
bool check_long(char* a, char* b)
{
    return 0;
}

bool check_short(char* a, char* b)
{
    return 0;
}