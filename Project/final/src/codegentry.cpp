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
vector<int> fake_labels;
vector<table> proc_table;
vector<table> id_table;

int main(int argc, char **argv)
{
	string input_filename = argv[1];

	yyin = fopen(argv[1], "r");



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

		int real_count = 0;
		if(name[0]=='i')
		for(int i=2; i<name.length(); i++)
		{
			real_count *= 10;
			real_count += name[i]-48;
		}
		else if(name[0]=='p')
		for(int i=7; i<name.length(); i++)
		{
			real_count *= 10;
			real_count += name[i]-48;
		}	

		if(scope!="")
		{	
			if(name[0]=='p')
			{
				p_cnt = real_count;
				if(proc_table.size()<real_count+1)
					proc_table.resize(real_count+1);
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
			}
			else if(name[0]=='i')
			{
				i_cnt = real_count;
				if(id_table.size()<real_count+1)
					id_table.resize(real_count+1);
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
				
			}
		}
	}
	yyparse();

	print_code(V);
	ip.close();
}
