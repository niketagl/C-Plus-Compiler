#include <string>
#include <vector>
#include <fstream>
#include "tac.h"

extern int code_line;

void emit(vector < code_ptr > &V, string s1, string s2 , string s3 , string s4, string s5 )
{
	code_ptr c = new code;
	c->s.append(s1);
	c->s.append(" ");
	c->s.append(s2);
	c->s.append(" ");
	c->s.append(s3);
	c->s.append(" ");
	c->s.append(s4);
	c->s.append(" ");
	c->s.append(s5);
	c->s.append(" ");
	c -> line = code_line++;
	c -> goto_line = 0;

	V.push_back(c);
	return;
}


void print_code( vector <code_ptr> &V )
{
	ofstream f;
	f.open("output_code.txt");

	for(int i=0; i < V.size() ; i++ )
	{
		f<<V[i]->line<<" : "<<V[i]->s ;
		if(V[i]->goto_line)
			f<<" "<<V[i]->goto_line;
		f<<endl;
	}
	f.close();
}