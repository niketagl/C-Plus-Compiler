%{
	#include "tokens.h"
%}

%%

"auto"		return AUTO;
"double"		return DOUBLE;
"int"		return INT;
"struct"		return STRUCT;
"break"		return BREAK;
"else"		return ELSE;
"long"		return LONG;
"switch"		return SWITCH;
"case"		return CASE;
"enum"		return ENUM;
"register"		return REGISTER;
"typedef"		return TYPEDEF;
"char"		return CHAR;
"extern"		return EXTERN;
"return"		return RETURN;
"union"		return UNION;
"const"		return CONST;
"float"		return FLOAT;
"short"		return SHORT;
"unsigned"		return UNSIGNED;
"continue"		return CONTINUE;
"for"		return FOR;
"signed"		return SIGNED;
"void"		return VOID;
"default"		return DEFAULT;
"goto"		return GOTO;
"sizeof"		return SIZEOF;
"volatile"		return VOLATILE;
"do"		return DO;
"if"		return IF;
"static"		return STATIC;
"while"		return WHILE;
[a-z_A-Z][a-zA-Z_0-9]*	return IDENTIFIER;
\"([^"]|\\\")*\"		return STRING;
"//".*		return COMMENT;
"/*"([^*]|\*+[^/])*"*/"		return COMMENT;
"||"|"&&"|"!"		return LOGICALOPERATOR;
"++"|"--"	return UNARYOPERATOR;
"+"|"-"|"*"|"/"|"%"   return ARITHEMATICOPERATOR;
"<"|"<="|">"|">="|"=="|"!="	return RELATIONALOPERATOR;
"&"|"|"|"<<"|">>"|"~"|"^"   return BITWISEOPERATOR;
"="|"+="|"-="|"*="|"/="|"%="	return ASSIGNMENTOPERATOR;
[\n]	return NEWLINE;
[\t]	return TAB;
[ ]		return SPACE;
[{}()\[\]]	return PARANTHESES;
[?:;#]	return OTHERSYMBOLS;
.	return ERROR;	



%%
 
int yywrap(void)
{
	return 1;
}