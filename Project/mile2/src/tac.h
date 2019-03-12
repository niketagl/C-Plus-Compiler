#include <vector>

using namespace std;

typedef struct code{
	int line;
	string s;
	int goto_line;
} code , *code_ptr;


void emit(vector < code_ptr > &V, string s1 = "", string s2 = "", string s3 = "", string s4 = "", string s5 = "" );
void print_code ( vector < code_ptr > &V);