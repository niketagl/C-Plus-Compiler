#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include "symboltable.h"
#include "tac.h"
#include <stack>
#include <map>

using namespace std;

extern int yyparse();
extern FILE *yyin;

int code_line = 100;
stack < table_ptr > table_stack;
stack < int > offset_stack;
vector < code_ptr > V;
vector < table_entry_ptr > arg_list;
map < string , int > labels;
table_ptr struct_namespace;

void preprocess()
{
	cout<<"got a preprocessor !!\n\n";
}

int main(int argc, char **argv)
{
	string input_filename = argv[1];

	yyin = fopen(argv[1], "r");

	table_ptr global_table = new table;
	struct_namespace = new table;
	struct_namespace->name.append("GLOBAL");
	struct_namespace->scope.append("GLOBAL");

	global_table->parent = NULL;
	global_table->name.append("GLOBAL");
	global_table->scope.append("GLOBAL");

	table_stack.push(global_table);
	offset_stack.push(0); 

	yyparse();

	savetable(global_table, "global_table.csv");
	savetable(struct_namespace, "structures.csv");
	print_code(V);
}
