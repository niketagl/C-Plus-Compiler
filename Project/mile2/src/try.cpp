#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

using namespace std;

extern int yyparse();
extern FILE *yyin;

void preprocess()
{
	cout<<"got a preprocessor !!\n\n";
}

int main(int argc, char **argv)
{
	string input_filename = argv[1];

	yyin = fopen(argv[1], "r");

	yyparse();


}
