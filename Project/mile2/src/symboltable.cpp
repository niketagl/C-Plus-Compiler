#include <iostream>
#include <string>
#include <map>
#include "symboltable.h"
using namespace std;


table_ptr mktable( table_ptr parent = NULL)
{
	table_ptr t = new table;
	t->parent = parent;
	return t;
}

table_entry_ptr enter( table_ptr t, char* name, type_ptr type, int offset)
{
	table_entry_ptr t_entry = new table_entry;
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

void addwidth( table_ptr t, unsigned long width)
{
	t->width = width;
	return;
}

table_entry_ptr enter_proc( table_ptr t, char* name, type_ptr type,table_ptr child)
{
	table_entry_ptr t_entry = new table_entry;
	
	t_entry->proc = 1;
	
	t_entry->t = child;

	t_entry->name = name;

	t_entry->type = type;
	
	string nam = name;

	t->entries.insert( pair<string, struct table_entry* >(nam, t_entry) ) ;
	
	return t_entry; 
}


type_ptr new_basic_type (type_inf info)
{
	type_ptr t = new type_node;
	t->info = info;
	t->p1 = NULL; 
	t->p2 = NULL;
	return t;
}


type_ptr new_function_type(type_ptr t1, type_ptr t2)
{
	// function from type t1 to type t2
	type_ptr t= new type_node;
	t->info = FUNCTION;
	t->p1 = t1;
	t->p2 = t2;
	return t;
}

type_ptr new_cartesian_type(type_ptr a, type_ptr t1)
{
	// returns type a*t1
	type_ptr t = new type_node;
	t->info = CARTESIAN;
	t->p1 = a;
	t->p2 = t1;
	return t;
}

type_ptr new_pointer_type(type_ptr t1)
{
	// returns type pointer(t)
	type_ptr t = new type_node;
	t->info = POINTER;
	t->p1 = t1;
	t->p2 = NULL;
	return t;
}

int type_match (type_ptr t1, type_ptr t2)
{
	if(!(t1 && t2))
		return 0;

	if(t1->info == t2->info)
		switch ( t1->info ) 
		{
			case CARTESIAN:
			case FUNCTION: 
				int v;
				v = type_match(t1->p1, t2->p1);
				if(v) return type_match(t1->p2, t2->p2);
				else return 0;

			case POINTER:
				return type_match(t1->p1 , t2->p1);

			default:
				return 1;
		}
}