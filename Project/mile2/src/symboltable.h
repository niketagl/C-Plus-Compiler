#include <string>
#include <map>

using namespace std;


// type-system
typedef enum {
	CHAR,
	INT,
	POINTER,
	CARTESIAN,
	FUNCTION,
	VOID,
	ERROR
} type_inf;

typedef struct typenode{
	type_inf info;
	struct typenode *p1, *p2;  // will be used for pointer, cartesian and function.
}type_node, *type_ptr;


// symbol table

typedef struct table_entry{
	string name;
	bool proc;   // will be 1 for procedure
	struct table *t;
	type_ptr type;
	int width;
	int offset;

}table_entry, *table_entry_ptr;

typedef struct table{	
	struct table *parent;
	long unsigned width;
	map < string , struct table_entry* > entries;
}table, *table_ptr;



//functions

table_ptr mktable( table_ptr );

table_entry_ptr enter( table_ptr t, char* name, type_ptr type, int offset);

table_entry_ptr enter_proc( table_ptr t, char* name, type_ptr type, table_ptr child);

void addwidth(table_ptr t, unsigned long width);
//
type_ptr new_basic_type (type_inf);

int type_match (type_ptr, type_ptr);

type_ptr new_function_type(type_ptr, type_ptr);

type_ptr new_cartesian_type(type_ptr, type_ptr);

type_ptr new_pointer_type(type_ptr);
