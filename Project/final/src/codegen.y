%{

extern int yylex();

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char yytext[];
extern int column;
extern int yylineno;
int flag_of_main = 0;

void yyerror(const char*);
bool check_long(char* a, char* b);
bool check_short(char* a, char* b);

%}

%code requires {
	#include "src/codegentac.h"
	#include <stack>
	#include <iostream>
	#include <vector>
	#include <map>
	#include <string>
    #include <cstdlib>
    #include <string.h>
	using namespace std;
	extern vector < table > id_table;
    extern vector < table > proc_table;
	extern int code_line;
	extern int count;
	extern vector < code_ptr > V;
	extern map < string , int > labels;
    extern vector<table> proc_table;
    extern vector<table> id_table;
    extern vector<int> fake_labels;
    extern vector<int> code_lines;
}

%union{
	char charval;
	int intval;
	float floatval;
	char *stringval;
}

%token ID LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP PTR_OP
%token INT REAL POINT
%token INTCAST FLOATCAST DOUBLECAST
%token END PROC_ID IF GOTO PUSH_PARAM CALL RETURN INTEGER_CONSTANT CHAR_CONSTANT FLOAT_CONSTANT
%token STRING_LITERAL FUN_NAME PREDEF POP_RET

%start translation_unit


%%

translation_unit
    : L translation_unit
    | L 
    ;

L 
    : PROCEDURE_LABEL
    | LINE_NO ':' THREE_AC {
    							

    						}
    | LINE_NO ':' END 	{
    						if(flag_of_main)
    										{
    											flag_of_main = 0;
    											emit2(V, "mov rax, 60");
    											emit2(V, "mov rdi, 0");
    											emit2(V, "syscall");
    										}

                            for(int i=0; i<fake_labels.size(); i++)
                            {
                                char temp_label[20];
                                sprintf(temp_label, "_label%d", fake_labels[i]);
                                labels.insert ( pair< string, int >(temp_label, code_lines[fake_labels[i]-100]));
                                
                            }
    					}
    ;

LINE_NO
    : INTEGER 				 { 
                                code_lines.push_back(code_line);
    							$<intval>$ = $<intval>1; 

    						}
    ;

INTEGER
    : INTEGER_CONSTANT      { $<intval>$ = $<intval>1 ; }
    ;

PROCEDURE_LABEL
    : PROC_ID INTEGER FUN_NAME ':' 
    							{
                                    int fwidth = proc_table[$<intval>2].width;
                                    char f_width[10];
                                    sprintf(f_width, "%d", fwidth);
    								if(strcmp($<stringval>3,"<main>")==0)
    									{
    										string temp_label = "_start";
											labels.insert ( pair< string, int >(temp_label, code_line));
											flag_of_main = 1;
    									}
    								else
    									{
    										if(flag_of_main)
    										{
    											flag_of_main = 0;
    											emit2(V, "mov rax, 60");
    											emit2(V, "mov rdi, 0");
    											emit2(V, "syscall");
    										}

    										char num[10];
    										sprintf(num, "%s%d", "_proc_id",$<intval>2);
    										string temp_label = num;
											labels.insert ( pair< string, int >(temp_label, code_line));
    									}
                                    emit2(V, "push", "rbp");
                                    emit2(V, "mov", "rbp", ",", "rsp");
                                    emit2(V, "sub", "rsp", ",", f_width);
    							}
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
                                                        char regbp3[15];
                                                        char regbp5[15];
                                                        char regbp1[15];
                                                        if(id_table[$<intval>3].is_param)
                                                        {
                                                            int shift3 = abs(id_table[$<intval>3].offset) + 16;
                                                            sprintf(regbp3, "[%s + %d]", "rbp", shift3);

                                                        }
                                                        else if(id_table[$<intval>3].scope != "Global")
                                                        {
                                                            int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
                                                            sprintf(regbp3, "[%s - %d]", "rbp", shift3);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp3, "id%d", $<intval>3);
                                                        }
                                                        
                                                        if(id_table[$<intval>5].is_param)
                                                        {
                                                            int shift5 = abs(id_table[$<intval>5].offset) + 16;
                                                            sprintf(regbp5, "[%s + %d]", "rbp", shift5);

                                                        }
                                                        else if(id_table[$<intval>5].scope != "Global")
                                                        {
                                                            int shift5 = abs(id_table[$<intval>5].offset) + abs(id_table[$<intval>5].width);
                                                            sprintf(regbp5, "[%s - %d]", "rbp", shift5);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp5, "id%d", $<intval>5);
                                                        }

                                                        if(id_table[$<intval>1].is_param)
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                            sprintf(regbp1, "[%s + %d]", "rbp", shift1);

                                                        }
                                                        else if(id_table[$<intval>1].scope != "Global")
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                            sprintf(regbp1, "[%s - %d]", "rbp", shift1);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp1, "id%d", $<intval>1);
                                                        }
                                                        
                                                        if(!strcmp($<stringval>4, "int+"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(id_table[$<intval>3].width == 2 && id_table[$<intval>5].width == 2) prefix[0] =  ' ';
                                                            if(id_table[$<intval>3].width == 8 || id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "add", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "add", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int-"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(id_table[$<intval>3].width == 2 && id_table[$<intval>5].width == 2) prefix[0] =  ' ';
                                                            if(id_table[$<intval>3].width == 8 || id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "sub", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "sub", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int*"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(id_table[$<intval>3].width == 2 && id_table[$<intval>5].width == 2) prefix[0] =  ' ';
                                                            if(id_table[$<intval>3].width == 8 || id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            emit2(V, "mov", regbx,",", regbp5);
                                                            emit2(V, "mul", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real*"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "mul", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
                                                            
								                        }
                                                        else if(!strcmp($<stringval>4, "int/"))
								                        {
                                                            char prefix[2] = "e";
                                                            if(id_table[$<intval>3].width == 2 && id_table[$<intval>5].width == 2) prefix[0] =  ' ';
                                                            if(id_table[$<intval>3].width == 8 || id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            char regd[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            sprintf(regd, "%s%s", prefix, "dx");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "mov", regd, "," , "0x0");
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            
                                                            emit2(V, "mov", regbx,",",regbp5 );
                                                            emit2(V, "div", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);

								                        }
                                                        else if(!strcmp($<stringval>4, "real/"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rdx", ",", "0x0");
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "div", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int%"))
								                        {
                                                            emit2(V, "mov", "eax", ",", regbp3);
                                                            emit2(V, "mov", "edx", ",", "0x0");
                                                            emit2(V, "mov", "ebx", ",", regbp5);
                                                            emit2(V, "div", "ebx");
                                                            emit2(V, "mov", regbp1, ",", "edx");
								                        }
                                                        else if(!strcmp($<stringval>4, "int&"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "and", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int|"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",",  regbp3);
                                                            emit2(V, "mov", "ebx",  ",",  regbp5);
                                                            emit2(V, "or", "eax",   ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int^"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "xor", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int=="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setz", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int!="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setnz", regbp1);
                                                        }
                                                    }
    | IDENTIFIER assignment_operator IDENTIFIER op INTEGER
                                                    {
                                                        char regbp3[15];
                                                        char regbp5[15];
                                                        sprintf(regbp5, "%d", $<intval>5);
                                                        char regbp1[15];
                                                        if(id_table[$<intval>3].is_param)
                                                        {
                                                            int shift3 = abs(id_table[$<intval>3].offset) + 16;
                                                            sprintf(regbp3, "[%s + %d]", "rbp", shift3);

                                                        }
                                                        else if(id_table[$<intval>3].scope != "Global")
                                                        {
                                                            int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
                                                            sprintf(regbp3, "[%s - %d]", "rbp", shift3);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp3, "id%d", $<intval>3);
                                                        }
                                                        
                                                        

                                                        if(id_table[$<intval>1].is_param)
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                            sprintf(regbp1, "[%s + %d]", "rbp", shift1);

                                                        }
                                                        else if(id_table[$<intval>1].scope != "Global")
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                            sprintf(regbp1, "[%s - %d]", "rbp", shift1);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp1, "id%d", $<intval>1);
                                                        }
                                                        
                                                        if(!strcmp($<stringval>4, "int+"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>3].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "add", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "add", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int-"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>3].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "sub", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "sub", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int*"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>3].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            emit2(V, "mov", regbx,",", regbp5);
                                                            emit2(V, "mul", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real*"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "mul", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
                                                            
								                        }
                                                        else if(!strcmp($<stringval>4, "int/"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>3].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            char regd[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            sprintf(regd, "%s%s", prefix, "dx");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "mov", regd, "," , "0x0");
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            
                                                            emit2(V, "mov", regbx,",",regbp5 );
                                                            emit2(V, "div", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);

								                        }
                                                        else if(!strcmp($<stringval>4, "real/"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rdx", ",", "0x0");
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "div", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int%"))
								                        {
                                                            emit2(V, "mov", "eax", ",", regbp3);
                                                            emit2(V, "mov", "edx", ",", "0x0");
                                                            emit2(V, "mov", "ebx", ",", regbp5);
                                                            emit2(V, "div", "ebx");
                                                            emit2(V, "mov", regbp1, ",", "edx");
								                        }
                                                        else if(!strcmp($<stringval>4, "int&"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "and", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int|"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",",  regbp3);
                                                            emit2(V, "mov", "ebx",  ",",  regbp5);
                                                            emit2(V, "or", "eax",   ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int^"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "xor", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int=="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setz", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int!="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setnz", regbp1);
                                                        }
                                                    }
    | IDENTIFIER assignment_operator INTEGER op IDENTIFIER
                                                    {
                                                        char regbp3[15];
                                                        char regbp5[15];
                                                        char regbp1[15];
                                                        sprintf(regbp3, "%d", $<intval>3);
                                                        
                                                        if(id_table[$<intval>5].is_param)
                                                        {
                                                            int shift5 = abs(id_table[$<intval>5].offset) + 16;
                                                            sprintf(regbp5, "[%s + %d]", "rbp", shift5);

                                                        }
                                                        else if(id_table[$<intval>5].scope != "Global")
                                                        {
                                                            int shift5 = abs(id_table[$<intval>5].offset) + abs(id_table[$<intval>5].width);
                                                            sprintf(regbp5, "[%s - %d]", "rbp", shift5);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp5, "id%d", $<intval>5);
                                                        }

                                                        if(id_table[$<intval>1].is_param)
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                            sprintf(regbp1, "[%s + %d]", "rbp", shift1);

                                                        }
                                                        else if(id_table[$<intval>1].scope != "Global")
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                            sprintf(regbp1, "[%s - %d]", "rbp", shift1);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp1, "id%d", $<intval>1);
                                                        }
                                                        
                                                        if(!strcmp($<stringval>4, "int+"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "add", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "add", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int-"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "sub", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "sub", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int*"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            emit2(V, "mov", regbx,",", regbp5);
                                                            emit2(V, "mul", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real*"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "mul", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
                                                            
								                        }
                                                        else if(!strcmp($<stringval>4, "int/"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            if(id_table[$<intval>5].width == 8)
                                                            {
                                                                prefix[0] =  'r';
                                                            }
                                                            char reg[4];
                                                            char regd[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            sprintf(regd, "%s%s", prefix, "dx");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "mov", regd, "," , "0x0");
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            
                                                            emit2(V, "mov", regbx,",",regbp5 );
                                                            emit2(V, "div", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);

								                        }
                                                        else if(!strcmp($<stringval>4, "real/"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rdx", ",", "0x0");
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "div", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int%"))
								                        {
                                                            emit2(V, "mov", "eax", ",", regbp3);
                                                            emit2(V, "mov", "edx", ",", "0x0");
                                                            emit2(V, "mov", "ebx", ",", regbp5);
                                                            emit2(V, "div", "ebx");
                                                            emit2(V, "mov", regbp1, ",", "edx");
								                        }
                                                        else if(!strcmp($<stringval>4, "int&"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "and", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int|"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",",  regbp3);
                                                            emit2(V, "mov", "ebx",  ",",  regbp5);
                                                            emit2(V, "or", "eax",   ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int^"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "xor", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int=="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setz", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int!="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setnz", regbp1);
                                                        }
                                                    }
    | IDENTIFIER assignment_operator INTEGER op INTEGER
                                                    {
                                                        char regbp3[15];
                                                        char regbp5[15];
                                                        char regbp1[15];
                                                        sprintf(regbp3, "%d", $<intval>3);
                                                        sprintf(regbp5, "%d", $<intval>5);

                                                        if(id_table[$<intval>1].is_param)
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                            sprintf(regbp1, "[%s + %d]", "rbp", shift1);

                                                        }
                                                        else if(id_table[$<intval>1].scope != "Global")
                                                        {
                                                            int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                            sprintf(regbp1, "[%s - %d]", "rbp", shift1);
                                                        }
                                                        else
                                                        {
                                                            sprintf(regbp1, "id%d", $<intval>1);
                                                        }
                                                        
                                                        if(!strcmp($<stringval>4, "int+"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "add", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real+"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "add", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int-"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "sub", reg, ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real-"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "sub", "rax", ",", regbp5);
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int*"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            char reg[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            emit2(V, "mov", regbx,",", regbp5);
                                                            emit2(V, "mul", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);
								                        }
                                                        else if(!strcmp($<stringval>4, "real*"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "mul", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
                                                            
								                        }
                                                        else if(!strcmp($<stringval>4, "int/"))
								                        {
                                                            char prefix[2] = "e";
                                                            
                                                            char reg[4];
                                                            char regd[4];
                                                            sprintf(reg, "%s%s", prefix, "ax");
                                                            sprintf(regd, "%s%s", prefix, "dx");
                                                            emit2(V, "mov", reg, ",", regbp3);
                                                            emit2(V, "mov", regd, "," , "0x0");
                                                            char regbx[4];

                                                            sprintf(regbx, "%s%s",prefix, "bx");
                                                            
                                                            emit2(V, "mov", regbx,",",regbp5 );
                                                            emit2(V, "div", regbx);
                                                            emit2(V, "mov", regbp1, ",", reg);

								                        }
                                                        else if(!strcmp($<stringval>4, "real/"))
								                        {
                                                            emit2(V, "mov", "rax", ",", regbp3);
                                                            emit2(V, "mov", "rdx", ",", "0x0");
                                                            emit2(V, "mov", "rbx", ",", regbp5);
                                                            emit2(V, "div", "rbx");
                                                            emit2(V, "mov", regbp1, ",", "rax");
								                        }
                                                        else if(!strcmp($<stringval>4, "int%"))
								                        {
                                                            emit2(V, "mov", "eax", ",", regbp3);
                                                            emit2(V, "mov", "edx", ",", "0x0");
                                                            emit2(V, "mov", "ebx", ",", regbp5);
                                                            emit2(V, "div", "ebx");
                                                            emit2(V, "mov", regbp1, ",", "edx");
								                        }
                                                        else if(!strcmp($<stringval>4, "int&"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "and", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int|"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",",  regbp3);
                                                            emit2(V, "mov", "ebx",  ",",  regbp5);
                                                            emit2(V, "or", "eax",   ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int^"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "xor", "eax",  ",", "ebx");
                                                            emit2(V, "mov", regbp1, ",",  "ebx");
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<"))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "sets", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int<="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp5);
                                                            emit2(V, "mov", "ebx",  ",", regbp3);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int>="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setns", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int=="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setz", regbp1);
                                                        }
                                                        else if(!strcmp($<stringval>4, "int!="))
                                                        {
                                                            emit2(V, "mov", "eax",  ",", regbp3);
                                                            emit2(V, "mov", "ebx",  ",", regbp5);
                                                            emit2(V, "cmp", "eax",  ",", "ebx");
                                                            emit2(V, "mov rcx, 0");
                                                            emit2(V, "mov", regbp1, ", ecx");
                                                            emit2(V, "setnz", regbp1);
                                                        }
                                                    }
    | IDENTIFIER assignment_operator IDENTIFIER
    											{

		                                            char regbp[15];
		                                            char regbp3[15];
		                                            if(id_table[$<intval>1].is_param)
		                                            {
		                                                int shift1 = abs(id_table[$<intval>1].offset) + 16;
		                                                sprintf(regbp, "[%s + %d]", "rbp", shift1);

		                                            }
		                                            else if(id_table[$<intval>1].scope != "Global")
		                                            {
		                                                int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
		                                                sprintf(regbp, "[%s - %d]", "rbp", shift1);
		                                            }
		                                            else
		                                            {
		                                                sprintf(regbp, "id%d", $<intval>1);
		                                            }

		                                            if(id_table[$<intval>3].is_param)
		                                            {
		                                                int shift3 = abs(id_table[$<intval>3].offset) + 16;
		                                                sprintf(regbp3, "[%s + %d]", "rbp", shift3);

		                                            }
		                                            else if(id_table[$<intval>3].scope != "Global")
		                                            {
		                                                int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
		                                                sprintf(regbp3, "[%s - %d]", "rbp", shift3);
		                                            }
		                                            else
		                                            {
		                                                sprintf(regbp3, "id%d", $<intval>3);
		                                            }
		                                            emit2(V, "mov eax,", regbp3);
		                                            emit2(V, "mov", regbp,",","eax");

    											}
    | IDENTIFIER assignment_operator cast_expression '(' IDENTIFIER ')'
    | IDENTIFIER assignment_operator INTEGER
                                        {
                                            char regbp[10];
                                            if(id_table[$<intval>1].is_param)
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                sprintf(regbp, "[%s + %d]", "rbp", shift1);

                                            }
                                            else if(id_table[$<intval>1].scope != "Global")
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                            }
                                            else
                                            {
                                                sprintf(regbp, "id%d", $<intval>1);
                                            }
                                            char kuch[10];
                                            sprintf(kuch, "%d", $<intval>3);
                                            emit2(V, "mov", "eax", ",",  kuch);
                                            emit2(V, "mov", regbp, ",", "eax");
                                        }
    | IDENTIFIER assignment_operator FLOAT_CONSTANT
                                        {
                                            char regbp[10];
                                            if(id_table[$<intval>1].is_param)
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                sprintf(regbp, "[%s + %d]", "rbp", shift1);

                                            }
                                            else if(id_table[$<intval>1].scope != "Global")
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                            }
                                            else
                                            {
                                                sprintf(regbp, "id%d", $<intval>1);
                                            }
                                            char kuch[10];
                                            sprintf(kuch, "%f", $<floatval>3);
                                            emit2(V, "mov", "rax", ",",  kuch);
                                            emit2(V, "mov", regbp, ",", "rax");
                                        }
    | IDENTIFIER assignment_operator CHAR_CONSTANT
                                        {
                                            char regbp[10];
                                            if(id_table[$<intval>1].is_param)
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                sprintf(regbp, "[%s + %d]", "rbp", shift1);

                                            }
                                            else if(id_table[$<intval>1].scope != "Global")
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                            }
                                            else
                                            {
                                                sprintf(regbp, "id%d", $<intval>1);
                                            }
                                            char kuch[10];
                                            sprintf(kuch, "%d", $<charval>3);
                                            emit2(V, "mov", "al", ",",  kuch);
                                            emit2(V, "mov", regbp, ",", "al");
                                        }
    | IDENTIFIER assignment_operator STRING_LITERAL
    | '*' IDENTIFIER assignment_operator INTEGER
                                        {
                                            char regbp[10];
                                            if(id_table[$<intval>2].is_param)
                                            {
                                                int shift2 = abs(id_table[$<intval>2].offset) + 16;
                                                sprintf(regbp, "[%s + %d]", "rbp", shift2);

                                            }
                                            else if(id_table[$<intval>2].scope != "Global")
                                            {
                                                int shift2 = abs(id_table[$<intval>2].offset) + abs(id_table[$<intval>2].width);
                                                sprintf(regbp, "[%s - %d]", "rbp", shift2);
                                            }
                                            else
                                            {
                                                sprintf(regbp, "id%d", $<intval>2);
                                            }
                                            char kuch[10];
                                            sprintf(kuch, "%d", $<intval>4);
                                            emit2(V, "mov", "eax", ",",  kuch);
                                            emit2(V, "mov rcx,", regbp);
                                            emit2(V, "mov [rcx], eax");
                                        }
    | '*' IDENTIFIER assignment_operator IDENTIFIER
                                        {
                                            char regbp[10];
                                            char regbp4[15];
                                            if(id_table[$<intval>2].is_param)
                                            {
                                                int shift2 = abs(id_table[$<intval>2].offset) + 16;
                                                sprintf(regbp, "[%s + %d]", "rbp", shift2);

                                            }
                                            else if(id_table[$<intval>2].scope != "Global")
                                            {
                                                int shift2 = abs(id_table[$<intval>2].offset) + abs(id_table[$<intval>2].width);
                                                sprintf(regbp, "[%s - %d]", "rbp", shift2);
                                            }
                                            else
                                            {
                                                sprintf(regbp, "id%d", $<intval>2);
                                            }

                                            if(id_table[$<intval>4].is_param)
                                            {
                                                int shift4 = abs(id_table[$<intval>4].offset) + 16;
                                                sprintf(regbp4, "[%s + %d]", "rbp", shift4);

                                            }
                                            else if(id_table[$<intval>4].scope != "Global")
                                            {
                                                int shift4 = abs(id_table[$<intval>4].offset) + abs(id_table[$<intval>4].width);
                                                sprintf(regbp4, "[%s - %d]", "rbp", shift4);
                                            }
                                            else
                                            {
                                                sprintf(regbp4, "id%d", $<intval>4);
                                            }	

                                            emit2(V, "mov eax,", regbp4);
                                            emit2(V, "mov rcx,", regbp);
                                            emit2(V, "mov [rcx], eax");
                                        }
    | IDENTIFIER assignment_operator '*' IDENTIFIER
                                        {
                                            char regbp[10];
                                            char regbp4[15];
                                            if(id_table[$<intval>1].is_param)
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                sprintf(regbp, "[%s + %d]", "rbp", shift1);

                                            }
                                            else if(id_table[$<intval>1].scope != "Global")
                                            {
                                                int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                sprintf(regbp, "[%s - %d]", "rbp", shift1);
                                            }
                                            else
                                            {
                                                sprintf(regbp, "id%d", $<intval>1);
                                            }

                                            if(id_table[$<intval>4].is_param)
                                            {
                                                int shift4 = abs(id_table[$<intval>4].offset) + 16;
                                                sprintf(regbp4, "[%s + %d]", "rbp", shift4);

                                            }
                                            else if(id_table[$<intval>4].scope != "Global")
                                            {
                                                int shift4 = abs(id_table[$<intval>4].offset) + abs(id_table[$<intval>4].width);
                                                sprintf(regbp4, "[%s - %d]", "rbp", shift4);
                                            }
                                            else
                                            {
                                                sprintf(regbp4, "id%d", $<intval>4);
                                            }	
                                            
                                            emit2(V, "mov rcx,", regbp4);
                                            emit2(V, "mov eax, [rcx]");
                                            emit2(V, "mov eax,", regbp);
                                        }
    ;

cast_expression
    : INTCAST
    | FLOATCAST
    | DOUBLECAST
    ;

JUMP
    : IF '(' IDENTIFIER op INTEGER_CONSTANT ')' GOTO LABEL 	
                                                        {
                                                        	char regbp[15];
                                                        	if(id_table[$<intval>3].is_param)
				                                            {
				                                                int shift3 = abs(id_table[$<intval>3].offset) + 16;
				                                                sprintf(regbp, "[%s + %d]", "rbp", shift3);

				                                            }
				                                            else if(id_table[$<intval>3].scope != "Global")
				                                            {
				                                                int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
				                                                sprintf(regbp, "[%s - %d]", "rbp", shift3);
				                                            }
				                                            else
				                                            {
				                                                sprintf(regbp, "id%d", $<intval>3);
				                                            }

    														if(strcmp($<stringval>4, "==")==0 && $<intval>5 ==0 )
    														{
                                                                char tempoww[8];
                                                                sprintf(tempoww, "%d", $<intval>8);
                                                                string tempoo = tempoww;
    															string temp = "_label" + tempoo;


    															emit2(V, "mov", "eax", ",", regbp);
    															emit2(V, "cmp", "eax", ", $0");
    															emit2(V, "je", temp);
    														}
    														else if(strcmp($<stringval>4, "!=")==0 && $<intval>5 ==0)
    														{
                                                                char tempoww[8];
                                                                sprintf(tempoww, "%d", $<intval>8);
                                                                string tempoo = tempoww;
                                                                string temp = "_label" + tempoo;

    															emit2(V, "mov", "eax", ",", regbp);
    															emit2(V, "cmp", "eax", ", $0");
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
    : LINE_NO 		{
                        code_lines.resize(code_lines.size()-1);
    					$<intval>$ = $<intval>1 ;
                        fake_labels.push_back($<intval>1);
    				}
    ;

FUNCTION    
    : PUSH_PARAM IDENTIFIER
    			{
    				char regbp[10];
                	if(id_table[$<intval>2].is_param)
                    {
                        int shift2 = abs(id_table[$<intval>2].offset) + 16;
                        sprintf(regbp, "[%s + %d]", "rbp", shift2);

                    }
                    else if(id_table[$<intval>2].scope != "Global")
                    {
                        int shift2 = abs(id_table[$<intval>2].offset) + abs(id_table[$<intval>2].width);
                        sprintf(regbp, "[%s - %d]", "rbp", shift2);
                    }
                    else
                    {
                        sprintf(regbp, "id%d", $<intval>2);
                    }

                    emit2(V, "mov ebx,", regbp);
                    emit2(V, "sub rsp, 4");
                    emit2(V, "mov [rsp], ebx");

                    // for 64 bit parameters emit : mov rbx, [whtever]      
                    							//	push rbx
                    							
                    
    			}
    | POP_RET IDENTIFIER
    			{
    				char regbp[10];
                	if(id_table[$<intval>2].is_param)
                    {
                        int shift2 = abs(id_table[$<intval>2].offset) + 16;
                        sprintf(regbp, "[%s + %d]", "rbp", shift2);

                    }
                    else if(id_table[$<intval>2].scope != "Global")
                    {
                        int shift2 = abs(id_table[$<intval>2].offset) + abs(id_table[$<intval>2].width);
                        sprintf(regbp, "[%s - %d]", "rbp", shift2);
                    }
                    else
                    {
                        sprintf(regbp, "id%d", $<intval>2);
                    }

                    emit2(V, "mov", regbp, ", eax");
    			}
    | CALL PREDEF
    			{
    				char proc[20];
    				sprintf(proc, "%s", $<stringval>2);

    				//emit2(V, "pop rax");
    				emit2(V, "mov rax, 0");
    				emit2(V, "mov eax, [rsp]");
    				emit2(V, "add rsp, 4");

    				emit2(V, "call", proc);
    			}
    | CALL PROC_ID INTEGER
    			{
    				char proc[20];
    				sprintf(proc, "_proc_id%d", $<intval>3);
    				emit2(V, "call", proc);
    			}
    | RETURN IDENTIFIER
                {
                	char regbp[15];
                	if(id_table[$<intval>2].is_param)
                    {
                        int shift2 = abs(id_table[$<intval>2].offset) + 16;
                        sprintf(regbp, "[%s + %d]", "rbp", shift2);

                    }
                    else if(id_table[$<intval>2].scope != "Global")
                    {
                        int shift2 = abs(id_table[$<intval>2].offset) + abs(id_table[$<intval>2].width);
                        sprintf(regbp, "[%s - %d]", "rbp", shift2);
                    }
                    else
                    {
                        sprintf(regbp, "id%d", $<intval>2);
                    }
                    emit2(V, "mov", "rax", ",", regbp);
                    emit2(V, "mov rsp, rbp");
                    emit2(V, "pop", "rbp");
                    emit2(V, "ret");
                }
    | RETURN INTEGER
                {
                    char retval[10];
                    sprintf(retval, "%d", $<intval>2);
                    emit2(V, "mov", "rax", ",", retval);
                        emit2(V, "mov rsp, rbp");
                    emit2(V, "pop", "rbp");
                    emit2(V, "ret");
                }
    | RETURN CHAR_CONSTANT
                {
                    char retval[10];
                    sprintf(retval, "%d", $<charval>2);
                    emit2(V, "mov", "rax", ",", retval);
                        emit2(V, "mov rsp, rbp");
                    emit2(V, "pop", "rbp");
                    emit2(V, "ret");
                }
    | RETURN FLOAT_CONSTANT
                {
                    char retval[10];
                    sprintf(retval, "%f", $<floatval>2);
                    emit2(V, "mov", "rax", ",", retval);
                        emit2(V, "mov rsp, rbp");
                    emit2(V, "pop", "rbp");
                    emit2(V, "ret");
                }
    | RETURN STRING_LITERAL
    ;

INDEXED_ASSIGNMENT
    : IDENTIFIER assignment_operator IDENTIFIER '[' INTEGER ']'     {
                                                                       
                                                                        char regbp3[15];
                                                                        char regbp5[15];
                                                                        char regbp1[15];
                                                                        if(id_table[$<intval>3].is_param)
                                                                        {
                                                                            int shift3 = abs(id_table[$<intval>3].offset) + 16;
                                                                            sprintf(regbp3, "%d", shift3);
                                                                            emit2(V, "mov rcx, rbp");
                                                                            emit2(V, "add rcx,", regbp3);

                                                                        }
                                                                        else if(id_table[$<intval>3].scope != "Global")
                                                                        {
                                                                            int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
                                                                            sprintf(regbp3, "%d", shift3);
                                                                            emit2(V, "mov rcx, rbp");
                                                                            emit2(V, "add rcx,", regbp3);
                                                                        }
                                                                        else
                                                                        {
                                                                            sprintf(regbp3, "id%d", $<intval>3);
                                                                            emit2(V, "mov rcx,", regbp3);

                                                                            // what about this case ?
                                                                        }
                                                                       

                                                                        if(id_table[$<intval>1].is_param)
                                                                        {
                                                                            int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                                            sprintf(regbp1, "[%s + %d]", "rbp", shift1);

                                                                        }
                                                                        else if(id_table[$<intval>1].scope != "Global")
                                                                        {
                                                                            int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                                            sprintf(regbp1, "[%s - %d]", "rbp", shift1);
                                                                        }
                                                                        else
                                                                        {
                                                                            sprintf(regbp1, "id%d", $<intval>1);
                                                                        }
                                                                        char t_num[10];
                                                                        sprintf(t_num, "%d", $<intval>5);
                                                                        emit2(V, "mov rbx,", t_num);
                                                                        emit2(V, "mov", regbp1, ", rcx");

                                                                    }
    | IDENTIFIER assignment_operator IDENTIFIER '[' IDENTIFIER ']'  {
                                                                        char regbp3[15];
                                                                        char regbp5[15];
                                                                        char regbp1[15];
                                                                        if(id_table[$<intval>3].is_param)
                                                                        {
                                                                            int shift3 = abs(id_table[$<intval>3].offset) + 16;
                                                                            sprintf(regbp3, "%d", shift3);
                                                                            emit2(V, "mov rcx, rbp");
                                                                            emit2(V, "add rcx,", regbp3);

                                                                        }
                                                                        else if(id_table[$<intval>3].scope != "Global")
                                                                        {
                                                                            int shift3 = abs(id_table[$<intval>3].offset) + abs(id_table[$<intval>3].width);
                                                                            sprintf(regbp3, "%d", shift3);
                                                                            emit2(V, "mov rcx, rbp");
                                                                            emit2(V, "add rcx,", regbp3);
                                                                        }
                                                                        else
                                                                        {
                                                                            sprintf(regbp3, "id%d", $<intval>3);
                                                                            emit2(V, "mov rcx,", regbp3);

                                                                            // what about this case ?
                                                                        }
                                                                        
                                                                        if(id_table[$<intval>5].is_param)
                                                                        {
                                                                            int shift5 = abs(id_table[$<intval>5].offset) + 16;
                                                                            sprintf(regbp5, "[%s + %d]", "rbp", shift5);

                                                                        }
                                                                        else if(id_table[$<intval>5].scope != "Global")
                                                                        {
                                                                            int shift5 = abs(id_table[$<intval>5].offset) + abs(id_table[$<intval>5].width);
                                                                            sprintf(regbp5, "[%s - %d]", "rbp", shift5);
                                                                        }
                                                                        else
                                                                        {
                                                                            sprintf(regbp5, "id%d", $<intval>5);
                                                                        }

                                                                        if(id_table[$<intval>1].is_param)
                                                                        {
                                                                            int shift1 = abs(id_table[$<intval>1].offset) + 16;
                                                                            sprintf(regbp1, "[%s + %d]", "rbp", shift1);

                                                                        }
                                                                        else if(id_table[$<intval>1].scope != "Global")
                                                                        {
                                                                            int shift1 = abs(id_table[$<intval>1].offset) + abs(id_table[$<intval>1].width);
                                                                            sprintf(regbp1, "[%s - %d]", "rbp", shift1);
                                                                        }
                                                                        else
                                                                        {
                                                                            sprintf(regbp1, "id%d", $<intval>1);
                                                                        }

                                                                        emit2(V, "mov rbx, 0");
                                                                        emit2(V, "mov ebx,",regbp5);
                                                                        emit2(V, "add rcx, rbx");
                                                                        emit2(V, "mov", regbp1, ", rcx");

                                                                    }
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
    ;

%%




void yyerror(const char *s)
{
	fflush(stdout);
	printf("%s at line no : %d \n", s, yylineno);
}

/////////////////////   REMAINING   ///////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool check_long(char* a, char* b)
{
    return 0;
}

bool check_short(char* a, char* b)
{
    return 0;
}
