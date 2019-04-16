F			[1-9]
D 			[0-9]
O 			[0-7]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void counts();
void setvalh();
void setvalo();
void setvali();
void setvalc();
void setvalf();
void comment();
int check_type();
extern void preprocess();

%}

%%

"pop_ret_value" {counts(); return(POP_RET);}
"_inputints"	{counts(); return(PREDEF);}
"_printints"	{counts(); return(PREDEF);}
"cast_to_int"   {counts(); return(INTCAST); }
"cast_to_float"   {counts(); return(FLOATCAST); }
"cast_to_double"   {counts(); return(DOUBLECAST); }

"goto"			{ counts(); return(GOTO); }
"if"			{ counts(); return(IF); }
"int"			{ counts(); return(INT); }

"pointer"       {counts(); return(POINT); }

"real"			{ counts(); return(REAL); }

"return"		{ counts(); return(RETURN); }
"end"			{ counts(); return(END); }
"proc_id"			{ counts(); return(PROC_ID); }
"push_param"			{ counts(); return(PUSH_PARAM); }
"call"			{ counts(); return(CALL); }
"id"			{ counts(); return(ID); }

0[xX]{H}+{IS}?		{ counts(); setvalh(); return(INTEGER_CONSTANT); }

0{O}*{IS}?		{ counts(); setvalo();return(INTEGER_CONSTANT); }

{F}{D}*{IS}?		{ counts(); setvali(); return(INTEGER_CONSTANT); }

L?'(\\.|[^\\'])+'	{ counts(); setvalc(); return(CHAR_CONSTANT); }

{D}+{E}{FS}?		{ counts(); setvalf(); return(FLOAT_CONSTANT); }

{D}*"."{D}+({E})?{FS}?	{ counts(); setvalf(); return(FLOAT_CONSTANT); }

{D}+"."{D}*({E})?{FS}?	{ counts(); setvalf(); return(FLOAT_CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ counts(); return(STRING_LITERAL); }


">>"			{ counts(); return(RIGHT_OP); }
"<<"			{ counts(); return(LEFT_OP); }
"->"			{ counts(); return(PTR_OP); }
"<="			{ counts(); return(LE_OP); }
">="			{ counts(); return(GE_OP); }
"=="			{ counts(); return(EQ_OP); }
"!="			{ counts(); return(NE_OP); }

":"			{ counts(); return(':'); }
"="			{ counts(); return('='); }
"("			{ counts(); return('('); }
")"			{ counts(); return(')'); }
("["|"<:")		{ counts(); return('['); }
("]"|":>")		{ counts(); return(']'); }
"."			{ counts(); return('.'); }
"&"			{ counts(); return('&'); }
"!"			{ counts(); return('!'); }
"~"			{ counts(); return('~'); }
"-"			{ counts(); return('-'); }
"+"			{ counts(); return('+'); }
"*"			{ counts(); return('*'); }
"/"			{ counts(); return('/'); }
"%"			{ counts(); return('%'); }
"<"			{ counts(); return('<'); }
">"			{ counts(); return('>'); }
"^"			{ counts(); return('^'); }
"|"			{ counts(); return('|'); }
"?"			{ counts(); return('?'); }

[ \t\v\n\f]		{ counts(); }
"<"{L}({L}|{D})*">"		{ counts(); return(FUN_NAME); }

.			{ /* ignore bad characters */ }

%%

int yywrap()
{
	return(1);
}

int column = 0;

void counts()
{
	yylval.stringval = strdup(yytext);
	
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			{column = 0; yylineno++;}
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
   // ECHO;
}	

void setvalh()
{
	stringstream ss; 
    ss << std::hex << yytext; 
    ss >> yylval.intval;
}

void setvalo()
{
	int temp,dtemp=0,base=1;
	stringstream strtoint(yytext);
	strtoint >> temp;
	while (temp) 
	{ 
        int last_digit = temp % 10; 
        temp = temp / 10; 
        dtemp += last_digit * base; 
        base = base * 8; 
    }
    yylval.intval = dtemp;
}

void setvali()
{
	stringstream strtoint(yytext);
	strtoint >> yylval.intval;
}

void setvalc()
{
	if(yytext[0]=='\'')
	{
		if(yytext[1]!='\\')
		{
			yylval.charval = yytext[1];
		}
		else
		{
			if(yytext[2]=='\\')	yylval.charval = '\\';
			else if(yytext[2]=='\'')	yylval.charval = '\'';
			else if(yytext[2]=='"')	yylval.charval = '\"';
			else if(yytext[2]=='?')	yylval.charval = '\?';
			else if(yytext[2]=='a')	yylval.charval = '\a';
			else if(yytext[2]=='b')	yylval.charval = '\b';
			else if(yytext[2]=='f')	yylval.charval = '\f';
			else if(yytext[2]=='n')	yylval.charval = '\n';
			else if(yytext[2]=='r')	yylval.charval = '\r';
			else if(yytext[2]=='t')	yylval.charval = '\t';
			else if(yytext[2]=='v')	yylval.charval = '\v';
		}
	}
	else if(yytext[1]=='\'')
	{
		if(yytext[2]!='\\')
		{
			yylval.charval = yytext[2];
		}
		else
		{
			if(yytext[3]=='\\')	yylval.charval = '\\';
			else if(yytext[3]=='\'')	yylval.charval = '\'';
			else if(yytext[3]=='"')	yylval.charval = '\"';
			else if(yytext[3]=='?')	yylval.charval = '\?';
			else if(yytext[3]=='a')	yylval.charval = '\a';
			else if(yytext[3]=='b')	yylval.charval = '\b';
			else if(yytext[3]=='f')	yylval.charval = '\f';
			else if(yytext[3]=='n')	yylval.charval = '\n';
			else if(yytext[3]=='r')	yylval.charval = '\r';
			else if(yytext[3]=='t')	yylval.charval = '\t';
			else if(yytext[3]=='v')	yylval.charval = '\v';
		}
	}
}

void setvalf()
{
	yylval.floatval = atof(yytext);
}

int check_type()
{
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return(TYPE_NAME);
*
*	return(IDENTIFIER);
*/

/*
*	it actually will only return IDENTIFIER
*/

	// return(IDENTIFIER);
	return 0;
}