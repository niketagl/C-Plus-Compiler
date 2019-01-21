#include<iostream>
#include<string>
using namespace std;

#define ERROR cout<<"INVALID ARGUMENTS ! \n\n[USAGE]: LEXER --cfg=<path> <input_file_path> --output=<path>\n";

int main(int argc, char** argv)
{

	if(argc!=4)
	{
		ERROR
		return 0;
	}
	
	string input_file_path, cfg_file_path, output_file_path;
	int f1=0,f2=0,f3=0;
	
	for(int i=1; i<argc; i++)
	{
		string temp = argv[i];

		string temp1 = temp;
		temp1.resize(6);
		
		if(temp1=="--cfg=")
		{
			cfg_file_path = argv[i]+6;
			if(cfg_file_path.length()==0)
			{
				ERROR
				return 0;
			}
			cout<<"cfg file : "<<cfg_file_path<<endl;
			f1=1;
			continue;
		}

		temp1 = temp;
		temp1.resize(9);
		if(temp1=="--output=")
		{
			output_file_path = argv[i]+9;
			if(output_file_path.length()==0)
			{
				ERROR
				return 0;
			}
			cout<<"output file : "<<output_file_path<<endl;
			f2=1;
			continue;
		}

		input_file_path = argv[i];
		cout<<"input file : "<<input_file_path<<endl;
		f3=1;
	}

	if (!(f1&&f2&&f3))
	{
		ERROR
		return 0;
	}


	return 0;

}