#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include "symboltable.h"
#include "tac.h"
#include <stack>

using namespace std;

extern int yyparse();
extern FILE *yyin;

int code_line = 100;
stack < table_ptr > table_stack;
vector < code_ptr > V;

void preprocess()
{
	cout<<"got a preprocessor !!\n\n";
}

int main(int argc, char **argv)
{
	string input_filename = argv[1];

	yyin = fopen(argv[1], "r");

	table_ptr global_table = new table;
	global_table->parent = NULL;
	table_stack.push(global_table); 

	yyparse();

	savetable(global_table, "global_table.csv");

	print_code(V);
}
