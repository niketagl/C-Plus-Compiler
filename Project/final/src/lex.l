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
"#".*		{counts(); preprocess();}
"//".*		{counts();}
"/*"([^*]|\*+[^/])*"*/"		{counts();}

"asm"			{ counts(); return(ASM); }
"auto"			{ counts(); return(AUTO); }
"break"			{ counts(); return(BREAK); }
"case"			{ counts(); return(CASE); }
"char"			{ counts(); return(CHAR); }
"class"			{ counts(); return(CLASS); }
"const"			{ counts(); return(CONST); }
"continue"		{ counts(); return(CONTINUE); }
"default"		{ counts(); return(DEFAULT); }
"do"			{ counts(); return(DO); }
"double"		{ counts(); return(DOUBLE); }
"else"			{ counts(); return(ELSE); }
"enum"			{ counts(); return(ENUM); }
"extern"		{ counts(); return(EXTERN); }
"float"			{ counts(); return(FLOAT); }
"for"			{ counts(); return(FOR); }
"goto"			{ counts(); return(GOTO); }
"if"			{ counts(); return(IF); }
"int"			{ counts(); return(INT); }
"long"			{ counts(); return(LONG); }
"private"		{ counts(); return(PRIVATE); }
"protected"		{ counts(); return(PROTECTED); }
"public"		{ counts(); return(PUBLIC); }
"register"		{ counts(); return(REGISTER); }
"return"		{ counts(); return(RETURN); }
"short"			{ counts(); return(SHORT); }
"signed"		{ counts(); return(SIGNED); }
"sizeof"		{ counts(); return(SIZEOF); }
"static"		{ counts(); return(STATIC); }
"struct"		{ counts(); return(STRUCT); }
"switch"		{ counts(); return(SWITCH); }
"this"			{ counts(); return(THIS); }
"typedef"		{ counts(); return(TYPEDEF); }
"union"			{ counts(); return(UNION); }
"unsigned"		{ counts(); return(UNSIGNED); }
"void"			{ counts(); return(VOID); }
"volatile"		{ counts(); return(VOLATILE); }
"while"			{ counts(); return(WHILE); }

{L}({L}|{D})*		{ counts(); return(check_type()); }

0[xX]{H}+{IS}?		{ counts(); setvalh(); return(INTEGER_CONSTANT); }
0{O}*{IS}?		{ counts(); setvalo(); return(INTEGER_CONSTANT); }
{F}{D}*{IS}?		{ counts(); setvali(); return(INTEGER_CONSTANT); }
L?'(\\.|[^\\'])+'	{ counts(); setvalc(); return(CHAR_CONSTANT); }

{D}+{E}{FS}?		{ counts(); setvalf(); return(FLOAT_CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ counts(); setvalf(); return(FLOAT_CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ counts(); setvalf(); return(FLOAT_CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ counts(); return(STRING_LITERAL); }

"..."			{ counts(); return(ELLIPSIS); }
">>="			{ counts(); return(RIGHT_ASSIGN); }
"<<="			{ counts(); return(LEFT_ASSIGN); }
"+="			{ counts(); return(ADD_ASSIGN); }
"-="			{ counts(); return(SUB_ASSIGN); }
"*="			{ counts(); return(MUL_ASSIGN); }
"/="			{ counts(); return(DIV_ASSIGN); }
"%="			{ counts(); return(MOD_ASSIGN); }
"&="			{ counts(); return(AND_ASSIGN); }
"^="			{ counts(); return(XOR_ASSIGN); }
"|="			{ counts(); return(OR_ASSIGN); }
">>"			{ counts(); return(RIGHT_OP); }
"<<"			{ counts(); return(LEFT_OP); }
"++"			{ counts(); return(INC_OP); }
"--"			{ counts(); return(DEC_OP); }
"->"			{ counts(); return(PTR_OP); }
"&&"			{ counts(); return(AND_OP); }
"||"			{ counts(); return(OR_OP); }
"<="			{ counts(); return(LE_OP); }
">="			{ counts(); return(GE_OP); }
"=="			{ counts(); return(EQ_OP); }
"!="			{ counts(); return(NE_OP); }
"::"			{ counts(); return(SCOPE_RES); }
";"			{ counts(); return(';'); }
("{"|"<%")		{ counts(); return('{'); }
("}"|"%>")		{ counts(); return('}'); }
","			{ counts(); return(','); }
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

	return(IDENTIFIER);
}