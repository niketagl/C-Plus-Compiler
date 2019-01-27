#include <iostream>
#include "tokens.h"
#include <string.h>

using namespace std;

extern int yylex();
extern int yylineno;
extern char* yytext;

int main()
{
    for(int j=0; j<11; j++)
    {
    int i=yylex();
    cout<<i<<endl;
    }
    return 0;
}