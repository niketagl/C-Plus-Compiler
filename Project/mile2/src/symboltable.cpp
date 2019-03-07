#include <iostream>
#include <string>
#include <map>

using namespace std;


struct table_entry{
	string name;
	bool proc;   // will be 1 for procedure
	struct table *t;
	string type;
	int width;
	int offset; 
};

struct table{
	struct table *parent;
	long unsigned width;
	map < string , struct table_entry* > entries;
};



struct table* mktable( struct table* parent = NULL)
{
	struct table *t = new table;
	t->parent = parent;
	return t;
}

struct table_entry* enter( struct table* t, char* name, char* type, int offset)
{
	struct table_entry *t_entry = new table_entry;
	t_entry->proc = 0;
	t_entry->t = NULL;

	t_entry->name = name;

	t_entry->type = type;
	t_entry->offset = offset;


	// will have to write code for infering width using type,

	string nam = name;

	t->entries.insert( pair<string, struct table_entry* >(nam, t_entry) ) ;
	return t_entry; 
}

void addwidth( struct table* t, unsigned long width)
{
	t->width = width;
	return;
}

struct table_entry* enter_proc( struct table* t, char* name, struct table* child)
{
	struct table_entry *t_entry = new table_entry;
	t_entry->proc = 1;
	t_entry->t = child;

	t_entry->name = name;

	//t_entry->type = type;
	//t_entry->offset = offset;


	//will have to write code for infering width using type.

	string nam = name;

	t->entries.insert( pair<string, struct table_entry* >(nam, t_entry) ) ;
	return t_entry; 
}


