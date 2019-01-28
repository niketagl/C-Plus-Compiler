#include <bits/stdc++.h>
#include <iostream>
#include "tokens.h"
#include <string>
#include <cstdio>
#include <vector>
#include <fstream>
using namespace std;

extern int yylex();
extern int yylineno;
extern char* yytext;

vector<string> tagnames;
vector<string> colours;

ofstream output_file;

void lexeme_printer(char* lexeme, int i)
{
	output_file<<"<font color='"<<colours[i]<<"'>"<<lexeme<<"</font>";
}


int main()
{
	extern FILE *yyin;
	yyin = fopen("test1/input1.cpp", "r");

	ifstream cfg_file,list;

	cfg_file.open("test1/cfg1.txt");
	list.open("list.txt");
	while(list)
	{
		string tag;
		list>>tag;
		if(tag.length())
		{
			tagnames.push_back(tag);
		}
	}
	colours.resize(tagnames.size());

	while(cfg_file)
	{
		string tag, rang;
		cfg_file>>tag;
		cfg_file>>rang;
		if(tag.length())
		{	
			for(int i=0; i< tagnames.size(); i++)
			{
				if(tag==tagnames[i])
				{
					colours[i] = rang;
					break;
				}
			}
		}
	}
	/*
	for(int i=0; i<tagnames.size(); i++)
	{
		cout<<tagnames[i]<<" "<<colours[i]<<endl;
	}
	*/
	
	output_file.open("sample.html");

    for(int j=0; j<11; j++)
    {
    	int i=yylex();
    	lexeme_printer(yytext, i-1);
    }
    
    return 0;
}