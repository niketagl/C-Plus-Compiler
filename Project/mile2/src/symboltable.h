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
	REGIS
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
	int array_size;   // will be used for array type
	int value;
}type_node, *type_ptr;


// symbol table

typedef struct table_entry{
	string name;
	bool proc;   // will be 1 for procedures and structures.
	struct table *t;
	type_ptr type;
	int width;
	int offset;
	vector <int> nextlist;      // will be used for backpatching.
	vector <int> truelist;
	vector <int> falselist;
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

void addwidth(table_ptr t, int width);

table_entry_ptr lookup( table_ptr , char*);

table_entry_ptr same_lookup( table_ptr , char*);

//type system interface
string print_type(type_ptr);

type_ptr new_basic_type (type_inf);

type_ptr merge_type (type_ptr , type_ptr );

int type_match (type_ptr, type_ptr);

type_ptr new_function_type(type_ptr, type_ptr);

type_ptr new_cartesian_type(type_ptr, type_ptr);

type_ptr new_pointer_type(type_ptr);

type_ptr new_struct_type(type_ptr);

type_ptr new_array_type(type_ptr, int size);

char* type_check(string, table_entry_ptr &entry_out, table_entry_ptr, table_entry_ptr);
