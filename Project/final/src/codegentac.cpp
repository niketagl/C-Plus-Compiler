#include <string>
#include <vector>
#include <map>
#include <fstream>
#include "codegentac.h"

extern int code_line;
extern map < string , int > labels;

void emit2(vector < code_ptr > &V, string s1, string s2 , string s3 , string s4, string s5 )
{
	code_ptr c = new code;
	c->s.append(s1);
	if(s2!="")
	{
	c->s.append(" ");
	c->s.append(s2);
	}	
	if(s3!="")
	{
	c->s.append(" ");
	c->s.append(s3);
	}	
	if(s4!="")
	{
	c->s.append(" ");
	c->s.append(s4);
	}	
	if(s5!="")
	{
	c->s.append(" ");
	c->s.append(s5);
	}	
	c -> line = code_line++;
	c -> goto_line = 0;

	V.push_back(c);
	return;
}


void print_code( vector <code_ptr> &V )
{
	map < string, int> :: iterator i;
	for( i = labels.begin() ; i != labels.end() ; i++ )
	{
		int l_no = i->second;
		string lab = i->first;
		if(l_no-100<V.size())
		V[l_no-100]->label = lab;
	}

	ofstream f;
	f.open("assembly.txt");

	for(int i=0; i < V.size() ; i++ )
	{
		if(V[i]->label.length())
			f<<V[i]->label<<":"<<endl;

		f<<'\t'<<V[i]->s ;
		if(V[i]->goto_line)
			f<<" "<<V[i]->goto_line;
		f<<endl;
	}
	f.close();
}

vector <int> mklist (int i)
{
	vector <int> list;
	list.push_back(i);
	return list;
}

vector <int> merge_list (vector <int> l1, vector <int> l2)
{
	vector <int> list;
	for(int i=0; i<l1.size(); i++)
		list.push_back(l1[i]);

	for(int i=0; i<l2.size(); i++)
		list.push_back(l2[i]);

	return list;
}

void backpatch (vector <code_ptr> &V , vector <int> l, int label)
{
	// code_line is assumed to start from 100.

	for(int i=0; i<l.size(); i++)
	{
		V[l[i]-100]->goto_line = label;
	}
}