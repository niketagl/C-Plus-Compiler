#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include "codegentac.h"
#include <stack>
#include <map>

using namespace std;

extern int yyparse();
extern FILE *yyin;

int code_line = 100;
stack < int > offset_stack;
vector < code_ptr > V;
map < string , int > labels;


int main(int argc, char **argv)
{
	string input_filename = argv[1];

	yyin = fopen(argv[1], "r");

	yyparse();

	print_code(V);
}
