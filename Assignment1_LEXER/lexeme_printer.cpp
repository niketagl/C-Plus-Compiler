#include<iostream>
#include<fstream>
#include<string>
using namespace std;

fstream output_file;

struct mapping
{
	string tag_name;
	string color;
} *list ;

int list_size;

void lexeme_printer( string lexeme, string tag_name )
{
	// tag_name to colour mapping has to be created in main from cfg file.
	string color;

	for(int i=0; i<list_size; i++)       // is this loop making things slow? any better ideas ?
	{
		if(tag_name == list[i].tag_name)
		{
			color = list[i].color;
		}
	}

	output_file<<"<font color='"<<color<<"'>"<<lexeme<<"</font>";

	return;
}



int main()
{

	mapping input[2];
	input[0].tag_name="ID";
	input[0].color="BLUE";
	input[1].tag_name="NUMBER";
	input[1].color="RED";
	list_size=2;
	list = input;output_file.open("sample.html");
	
	lexeme_printer("22 ","NUMBER");
	lexeme_printer("Hello      ","ID");
	lexeme_printer("3","NUMBER");
	lexeme_printer("\n","ID");
	lexeme_printer("Hello      ","ID");
		
	return 0;
}