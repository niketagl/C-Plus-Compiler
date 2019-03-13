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

void count();
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
"#".*		{count(); preprocess();}
"//".*		{count();}
"/*"([^*]|\*+[^/])*"*/"		{count();}

"auto"			{ count(); return(AUTO); }
"break"			{ count(); return(BREAK); }
"case"			{ count(); return(CASE); }
"char"			{ count(); return(CHAR); }
"const"			{ count(); return(CONST); }
"continue"		{ count(); return(CONTINUE); }
"default"		{ count(); return(DEFAULT); }
"do"			{ count(); return(DO); }
"double"		{ count(); return(DOUBLE); }
"else"			{ count(); return(ELSE); }
"enum"			{ count(); return(ENUM); }
"extern"		{ count(); return(EXTERN); }
"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"goto"			{ count(); return(GOTO); }
"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"register"		{ count(); return(REGISTER); }
"return"		{ count(); return(RETURN); }
"short"			{ count(); return(SHORT); }
"signed"		{ count(); return(SIGNED); }
"sizeof"		{ count(); return(SIZEOF); }
"static"		{ count(); return(STATIC); }
"struct"		{ count(); return(STRUCT); }
"switch"		{ count(); return(SWITCH); }
"typedef"		{ count(); return(TYPEDEF); }
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*		{ count(); return(check_type()); }

0[xX]{H}+{IS}?		{ count(); setvalh(); return(INTEGER_CONSTANT); }
0{O}*{IS}?		{ count(); setvalo(); return(INTEGER_CONSTANT); }
{F}{D}*{IS}?		{ count(); setvali(); return(INTEGER_CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); setvalc(); return(CHAR_CONSTANT); }

{D}+{E}{FS}?		{ count(); setvalf(); return(FLOAT_CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); setvalf(); return(FLOAT_CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); setvalf(); return(FLOAT_CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }

"..."			{ count(); return(ELLIPSIS); }
">>="			{ count(); return(RIGHT_ASSIGN); }
"<<="			{ count(); return(LEFT_ASSIGN); }
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
">>"			{ count(); return(RIGHT_OP); }
"<<"			{ count(); return(LEFT_OP); }
"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }
"->"			{ count(); return(PTR_OP); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

int yywrap()
{
	return(1);
}

int column = 0;

void count()
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

	return(IDENTIFIER);
}