#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include "codegentac.h"
#include <stack>
#include <map>
#include <sstream>

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

	vector<table> proc_table;
	vector<table> id_table;

	ifstream ip("global_table.csv");

	if(!ip.is_open()) cout << "ERROR: File Open" << '\n';

	string scope;
	string is_param;
	string name;
	string type;
	string offset;
	string width;

	int p_cnt=0;
	int i_cnt=0;

	while(ip.good())
	{
		getline(ip,scope,',');
		getline(ip,is_param,',');
		getline(ip,name,',');
		getline(ip,type,',');
		getline(ip,offset,',');
		getline(ip,width,'\n');

		if(scope!="")
		{	
			if(name[0]=='p')
			{
				proc_table.push_back(table());
				proc_table[p_cnt].scope = scope;
				stringstream a(is_param);
				a >> proc_table[p_cnt].is_param;
				proc_table[p_cnt].name = name;
				proc_table[p_cnt].type = type.substr(1);
				stringstream b(offset);
				b >> proc_table[p_cnt].offset;
				stringstream c(width);
				c >> proc_table[p_cnt].width;
				// cout << "p" << p_cnt << proc_table[p_cnt].scope << proc_table[p_cnt].is_param << proc_table[p_cnt].name << proc_table[p_cnt].type << proc_table[p_cnt].offset << proc_table[p_cnt].width << endl;
				p_cnt++;
			}
			else if(name[0]=='i')
			{
				id_table.push_back(table());
				id_table[i_cnt].scope = scope;
				stringstream d(is_param);
				d >> id_table[i_cnt].is_param;
				id_table[i_cnt].name = name;
				id_table[i_cnt].type = type.substr(1);
				stringstream e(offset);
				e >> id_table[i_cnt].offset;
				stringstream f(width);
				f >> id_table[i_cnt].width;
				// cout << "i" << i_cnt << id_table[i_cnt].scope << id_table[i_cnt].is_param << id_table[i_cnt].name << id_table[i_cnt].type << id_table[i_cnt].offset << id_table[i_cnt].width << endl;
				i_cnt++;
			}
		}
	}

	ip.close();
}
