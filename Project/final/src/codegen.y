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
    #include <cstdlib>
    #include <string.h>
	using namespace std;
	extern vector < table > id_table;
    extern vector < table > proc_table;
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;
    extern vector<table> proc_table;
    extern vector<table> id_table;
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
    : INTEGER 				{$<intval>$ = $<intval>1 ;}
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
                                                        int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
                                                        int shift5 = abs(id_table[$<intval>5].offset)+ abs(id_table[$<intval>5].width);
                                                        int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);

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
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift3);
                                                            
                                                            emit2(V, "mov", reg, ",", regbp);

                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift5);
                                                            emit2(V, "add", reg, ",", regbp);

                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift1);
                                                            emit2(V, "mov", regbp, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift3);

                                                            emit2(V, "mov", "rax", ",", regbp);

                                                            sprintf(regbp, "[%s - %d]", "rbp", shift5);
                                                            emit2(V, "add", "rax", ",", regbp);
                                                            
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                                            emit2(V, "mov", regbp, ",", "rax");
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
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift3);
                                                            
                                                            emit2(V, "mov", reg, ",", regbp);

                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift5);
                                                            emit2(V, "sub", reg, ",", regbp);

                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift1);
                                                            emit2(V, "mov", regbp, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift3);

                                                            emit2(V, "mov", "rax", ",", regbp);

                                                            sprintf(regbp, "[%s - %d]", "rbp", shift5);
                                                            emit2(V, "sub", "rax", ",", regbp);
                                                            
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                                            emit2(V, "mov", regbp, ",", "rax");
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
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift3);
                                                            
                                                            emit2(V, "mov", reg, ",", regbp);
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift5);
                                                            emit2(V, "mov", regbx,",", regbp);
                                                            emit2(V, "mul", regbx);

                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift1);
                                                            emit2(V, "mov", regbp, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real*"))
								                        {
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift3);

                                                            emit2(V, "mov", "rax", ",", regbp);

                                                            sprintf(regbp, "[%s - %d]", "rbp", shift5);
                                                            emit2(V, "mov", "rbx", ",", regbp);
                                                            emit2(V, "mul", "rbx");
                                                            
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                                            emit2(V, "mov", regbp, ",", "rax");
                                                            
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
                                                            
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift3);
                                                            
                                                            emit2(V, "mov", reg, ",", regbp);
                                                            emit2(V, "mov", regd, "," , "0x0");
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift5);
                                                            emit2(V, "mov", regbx,",",regbp );
                                                            emit2(V, "div", regbx);

                                                            sprintf(regbp, "[%s%s - %d]", prefix, "bp", shift1);
                                                            emit2(V, "mov", regbp, ",", reg);

								                        }
                                                        else if(!strcmp($<stringval>4, "real/"))
								                        {
                                                            
                                                            char regbp[15];
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift3);

                                                            emit2(V, "mov", "rax", ",", regbp);
                                                            emit2(V, "mov", "rdx", "0x0");

                                                            sprintf(regbp, "[%s - %d]", "rbp", shift5);
                                                            emit2(V, "mov", "rbx", ",", regbp);
                                                            emit2(V, "div", "rbx");
                                                            
                                                            sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                                            emit2(V, "mov", regbp, ",", "rax");
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
    : IF '(' IDENTIFIER op INTEGER_CONSTANT ')' GOTO LABEL 	
                                                        {
    														if(strcmp($<stringval>4, "==") && $<intval>5 ==0 )
    														{
                                                                char tempoww[8];
                                                                sprintf(tempoww, "%d", $<intval>8);
                                                                string tempoo = tempoww;
    															string temp = "_label" + tempoo;
    															emit2(V, "mov", "rax", "$<address>3");
    															emit2(V, "cmp", "rax", "$0");
    															emit2(V, "je", temp);
    														}
    														else if(strcmp($<stringval>4, "==") && $<intval>5 ==0)
    														{
                                                                char tempoww[8];
                                                                sprintf(tempoww, "%d", $<intval>8);
                                                                string tempoo = tempoww;
                                                                string temp = "_label" + tempoo;
    															emit2(V, "mov", "rax", "$<address>3");
    															emit2(V, "cmp", "rax", "$0");
    															emit2(V, "jne", temp);
    														}
   														}
    | IF '(' IDENTIFIER ')' GOTO LABEL 	{
                                    char tempoww[8];
                                    sprintf(tempoww, "%d", $<intval>5);
                                    string tempoo = tempoww;
                                    string temp = "_label" + tempoo;
									emit2(V, "mov", "rax", "$<address>3");
									emit2(V, "cmp", "rax", "$0");
									emit2(V, "jne", temp);
    							}
    | GOTO LABEL 	{
                        char tempoww[8];
                        sprintf(tempoww, "%d", $<intval>2);
                        string tempoo = tempoww;
                        string temp = "_label" + tempoo;
						emit2(V, "jmp", temp);
    				}
    ;

LABEL
    : LINE_NO 		{$<intval>$ = $<intval>1 ;}
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

/*
                                                            char regbx[4];
                                                            sprintf(regbx, "%s%s", prefix, "bx");
                                                            char regbp[4];
                                                            sprintf(regbp, "%s%s", prefix, "bp");
                                                            emit2(V, "mov", regbx, regbp);
                                                            emit2(V, "sub", regbx, sshift3);
                                                            //stmt1

                                                            emit2(V, "mov", regbx, regbp);
                                                            emit2(V, "sub", regbx, sshift5);
                                                            //stmt2

                                                            emit2(V, "mov", regbx, regbp);
                                                            emit2(V, "sub", regbx, sshift1);
                                                            //stmt3
                                                            
                                                            ///////////FLOAT////////////////////////////////////////////////////////////////////

                                                            emit2(V, "mov", "rbx", "rbp");
                                                            emit2(V, "sub", "rbx", sshift3);
                                                            //stmt1

                                                            emit2(V, "mov", "rbx", "rbp");
                                                            emit2(V, "sub", "rbx", sshift5);
                                                            //stmt2

                                                            emit2(V, "mov", "rbx", "rbp");
                                                            emit2(V, "sub", "rbx", sshift1);
                                                            //stmt3
*/