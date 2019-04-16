#include <string>
#include <map>
#include <stack>
#include <vector>
using namespace std;


// type-system
typedef enum {
	CHR,
	INTEGER,
	POINTER,
	ARRAY,
	STRCT,
	CARTESIAN,
	FUNCTION,
	CLASSS,
	NOTYPE,
	VOD,
	ERROR,
	LONGER,
	SHORTER,
	DBL,
	FLT,
	UNSIGN,
	SIGN,
	EXTRN,
	VOLAT,
	CONSTNT,
	STAT,
	REGIS,
	DEPTR
} type_inf;

typedef struct typenode{
	type_inf info;
	struct typenode *p1, *p2;  // will be used for pointer, cartesian and function.
	bool extrn;
	bool regis;
	bool stat;
	bool volat;
	bool constnt;
	bool sign;     // set to 1 for signed.
	bool unsign;   // set to 1 for unsigned.
	bool longer;   // set to 1 for long. 
	bool shorter;	// set to 1 for short.
	bool param;     // set to 1 for parameter variables.
	int array_size;   // will be used for array typ
	int value;
	char* type_name;
}type_node, *type_ptr;


// symbol table

typedef struct table_entry{
	string name;
	string inp_name;
	bool proc;   // will be 1 for procedures and structures.
	bool proc_decl;    // will be 1 if proc is declared but not defined.
	bool isbool;
	struct table *t;
	type_ptr type;
	int width;
	int offset;
	vector <int> nextlist;      // will be used for backpatching.
	vector <int> truelist;
	vector <int> falselist;
	vector <int> breaklist;
	vector <int> contlist;
	vector <int> labellist;
}table_entry, *table_entry_ptr;

typedef struct table{	
	struct table *parent;
	string name;
	string scope;
	int width;
	map < string , table_entry_ptr > entries;
}table, *table_ptr;



//functions

//table interface
void savetable( table_ptr , char* filename);

table_ptr mktable( table_ptr parent = NULL);

table_entry_ptr enter( table_ptr t, char* name, type_ptr type, int offset);

table_entry_ptr enter_proc( table_ptr t, char* name, type_ptr type, table_ptr child);

table_entry_ptr enter_proc2( table_ptr t, char* name, type_ptr type);

void addwidth(table_ptr t, int width);

table_entry_ptr lookup( table_ptr , char*);

table_entry_ptr same_lookup( table_ptr , char*, type_ptr t1 = NULL);

table_entry_ptr same_lookup1( table_ptr , char*, type_ptr t1 = NULL);

void copy_table_content(table_ptr , table_ptr);

//type system interface
string print_type(type_ptr);

type_ptr new_basic_type (type_inf);

type_ptr merge_type (type_ptr , type_ptr );

int type_match (type_ptr, type_ptr);

type_ptr new_function_type(type_ptr, type_ptr);

type_ptr new_cartesian_type(type_ptr, type_ptr);

type_ptr new_pointer_type(type_ptr);

type_ptr new_struct_type(type_ptr, char*);

type_ptr new_class_type(type_ptr, char*);

type_ptr new_array_type(type_ptr, int size);

char* type_check(string, table_entry_ptr &entry_out, table_entry_ptr, table_entry_ptr);

bool type_compare(type_ptr, type_ptr);

char* type_check2(string, table_entry_ptr &entry_out, table_entry_ptr, table_entry_ptr);

char* type_check3(string op, table_entry_ptr &entry_out, table_entry_ptr entry_in1);

char* type_check4(string, table_entry_ptr &entry_out, table_entry_ptr, char*);

