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
	if(i+1 == NEWLINE)
		output_file<<"<br>\n";
	else if(i+1 == SPACE)
	{
		output_file<<"&nbsp;";
	}
	else if(i+1 == TAB)
	{
		output_file<<"&nbsp;&nbsp;&nbsp;&nbsp;";
	}
	else
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
			if(tag=="KEYWORD")
			{
				for(int i=0; i<30; i++)
					colours[i]=rang;
			}
			else
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
	}
	/*
	for(int i=0; i<tagnames.size(); i++)
	{
		cout<<tagnames[i]<<" "<<colours[i]<<endl;
	}
	*/
	
	output_file.open("sample.html");
	int i;
    do
    {
    	i=yylex();
    	cout<<tagnames[i-1]<<" "<<endl;
    	lexeme_printer(yytext, i-1);
    }
    while(i);

    return 0;
}