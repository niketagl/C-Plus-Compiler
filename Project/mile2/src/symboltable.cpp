#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include "symboltable.h"
using namespace std;


table_ptr mktable( table_ptr parent = NULL)
{
	table_ptr t = new table;
	t->parent = parent;
	return t;
}


string print_type(type_ptr t)
{
	string s;
	if(t->info == ERROR)
	{
		s.append("ERROR");
		return s;
	}
	if(t->constnt )
		s.append("CONSTANT ");
	if(t->longer)
		s.append("LONG ");
	if(t->shorter)
		s.append("SHORT ");
	if(t->unsign)
		s.append("UNSIGNED ");
	if(t->sign)
		s.append("SIGNED ");
	if(t->volat)
		s.append("VOLATILE ");
	if(t->extrn)
		s.append("EXTERN ");
	if(t->stat)
		s.append("STATIC ");
	if(t->regis)
		s.append("REGISTER ");

	switch(t->info)
	{
		case INTEGER : s.append("INT"); break;
		case CHR : s.append("CHAR"); break;
		case FLT : s.append("FLOAT"); break;
		case DBL : s.append("DOUBLE"); break;
		case POINTER : s.append("*"); s.append(print_type(t->p1)); break;
		case CARTESIAN : s.append(print_type(t->p1)); s.append(" ^ "); 
				s.append(print_type(t->p2)); break;
		case FUNCTION : s.append("FUNCTION : "); s.append(print_type(t->p1));
				s.append(" -> "); s.append(print_type(t->p2)); break;
		case NOTYPE : s.append("VOID"); break;
	}
	return s;
}


void savetable(table_ptr t, char* filename)
{
	ofstream f1;
	f1.open(filename);
	f1<<"Name, Type, Offset, Width\n";
	map < string , table_entry_ptr > ::iterator i;
	for ( i = t->entries.begin() ; i != t->entries.end(); i++ )
	{
		f1<<i->first;
		table_entry_ptr e = i->second;
		f1<<", "<<print_type(e->type)<<", "<< e->offset<<", "<<e->width<<"\n";
	}
	f1.close();

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

	t->entries.insert( pair<string, table_entry_ptr >(nam, t_entry) ) ;
	return t_entry; 
}

void addwidth( table_ptr t, int width)
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

	t->entries.insert( pair<string, table_entry_ptr >(nam, t_entry) ) ;
	
	return t_entry; 
}


type_ptr new_basic_type (type_inf info)
{
	type_ptr t = new type_node;
	
	t->info = NOTYPE;
	t->longer =0;
	t->shorter=0;
	t->unsign=0;
	t->sign=0;
	t->extrn=0;
	t->volat=0;
	t->constnt=0;
	t->regis=0;
	t->p1 = NULL; 
	t->p2 = NULL;

	switch(info){
		case LONGER : t->longer = 1; break;
		case SHORTER : t->shorter = 1; break;
		case UNSIGN : t->unsign =1; break;
		case SIGN : t->sign =1 ; break;
		case EXTRN : t->extrn = 1 ; break;
		case VOLAT : t->volat = 1; break;
		case STAT : t->stat =1 ; break;
		case REGIS : t->regis = 1 ; break;
		case CONSTNT : t->constnt =1 ; break;
		default : t->info = info;
	}
	return t;
}

type_ptr merge_type (type_ptr t1, type_ptr t2)
{
	if (t1->info!=NOTYPE && t2->info!=NOTYPE)
	{
		t1->info = ERROR;
		return t1;
	}
	if(t1->info==NOTYPE) t1->info = t2->info;
	//unsigned v signed
	if(t1->sign && t2->unsign || t1->unsign && t2->sign)
		t1->info=ERROR;

	//long v short
	if(t1->longer && t2->shorter || t1->shorter && t2->longer)
		t1->info=ERROR;

	t1->longer = t1->longer || t2->longer;
	t1->shorter = t1->shorter || t2->shorter ;
	t1->unsign = t1->unsign || t2->unsign;
	t1->sign = t1->sign || t2->sign;
	t1->extrn = t1->extrn || t2->extrn;
	t1->volat = t1->volat || t2->volat;
	t1->regis = t1->regis || t2->regis;
	t1->constnt = t1->constnt || t1->constnt;
	return t1;
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
	t->longer =0;
	t->shorter=0;
	t->unsign=0;
	t->sign=0;
	t->extrn=0;
	t->volat=0;
	t->constnt=0;
	t->regis=0;
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


table_entry_ptr lookup ( table_ptr t, char* name)
{
	string nam = name;
	if ( t->entries.find(nam) == t->entries.end() )
		return NULL;

	return t->entries.find(nam)->second;

}

