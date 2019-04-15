#include <vector>
#include <string>

using namespace std;

typedef struct code{
	int line;
	string s;
	int goto_line;
	string label;
} code , *code_ptr;

struct table{
	string scope;
	int is_param;
	string name;
	string type;
	int offset;
	int width;
};


void emit2(vector < code_ptr > &V, string s1 = "", string s2 = "", string s3 = "", string s4 = "", string s5 = "" );
void print_code ( vector < code_ptr > &V);

vector <int> mklist (int i);
vector <int> merge_list (vector <int> , vector <int>);
void backpatch (vector <code_ptr> &V , vector <int> l, int label);