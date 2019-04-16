#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include "symboltable.h"
#include "tac.h"
#include <string.h>
#include <stdlib.h>
using namespace std;

int count = 0;
int id_count = 0;
int proc_id_count = 0;
extern vector < code_ptr > V;
extern stack < table_ptr > table_stack;
extern stack <int> offset_stack;
extern void warning(const char*);
extern int code_line;
extern table_ptr struct_namespace;
extern table_ptr class_namespace;
extern map < string , int > labels;


table_ptr mktable( table_ptr parent)
{
	table_ptr t = new table;
	t->parent = parent;
	t->width = 0;
	return t;
}


string print_type(type_ptr t)
{
	string s;
	if(!t)
	{
		s.append("NIL");
		return s;
	}
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
		case ARRAY : 
		case POINTER : s.append("*"); s.append(print_type(t->p1)); break;

		case CARTESIAN : s.append(print_type(t->p1)); s.append(" ^ "); 
				s.append(print_type(t->p2)); break;
		case FUNCTION : s.append("FUNCTION : "); s.append(print_type(t->p1));
				s.append(" -> "); s.append(print_type(t->p2)); break;
		case NOTYPE : s.append("VOID"); break;
		case VOD : s.append("VOID"); break;
		case STRCT : s.append("STRUCT"); break;
		case CLASSS : s.append("CLASS"); break;
		case DEPTR : s.append(print_type(t->p1)); break;
	}
	return s;
}

void print_table(table_ptr t, ofstream &f1, string scope)
{
	if(t==NULL)return;
	map < string , table_entry_ptr > ::iterator i;
	for ( i = t->entries.begin() ; i != t->entries.end(); i++ )
	{
		
		table_entry_ptr e = i->second;

		if(e->proc==1)
		f1<<t->scope;
		else
		f1<<scope;

		if(e->type->param)
			f1<<", 1,";
		else
			f1<<", 0,";
		
		if(e->proc==1 && e->t != NULL)  // calculating width
		{
			table_ptr t11 = e->t;
			map < string , table_entry_ptr > ::iterator j;
			for( j = t11->entries.begin() ; j != t11->entries.end(); j ++)
			{
				e->width += j->second->width;
			}
		}

		f1<<i->first<<", "<<print_type(e->type)<<", "<< e->offset <<", "<<e->width<<"\n";

		if(e->proc==1)
		{
			print_table(e->t, f1, e->name);
		}
	}
}


void savetable(table_ptr t, char* filename)
{
	ofstream f1;
	f1.open(filename);
	f1<<"Scope, Is_Param, Name, Type, Offset, Width\n";
	string s = "Global";
	print_table(t,f1,s);
	f1.close();

}

void copy_table_content(table_ptr t_in, table_ptr t_out)
{
	int t_offset = offset_stack.top();
	map < string , table_entry_ptr > ::iterator i;
	for ( i = t_in->entries.begin() ; i != t_in->entries.end(); i++ )
	{
		table_entry_ptr e = i->second;

		e->offset += t_offset;
		
		string nam = i->first;

		t_out->entries.insert( pair<string, table_entry_ptr >(nam, e) ) ;
	}

}


int type_width(type_ptr type)
{
	int width = 0;
	if(type->info == INTEGER )
	{
		width = 4;
		if(type->shorter) width = 2;
		if(type->longer) width = 8;
	}
	if( type->info == FLT)
	{
		width = 8;
		//if(type->shorter) width = 16;
		//if(type->longer) width = 64;
	}
	if(type->info == CHR) width = 1;
	if(type->info == DBL)
	{
		width = 8;
		if(type->longer) width = 16;
	}
	if(type->info == POINTER) width = 8;
	if(type->info == ARRAY) width = type_width(type->p1) * type->array_size;
	if(type->info == STRCT) width = type_width(type->p1);
	if(type->info == CARTESIAN) width = type_width(type->p1) + type_width(type->p2);
	if(type->info == NOTYPE || type->info == VOD || type->info == ERROR) width = 0;
	if(type->info == DEPTR) {width = type_width(type->p1);}
	return width;
}

table_entry_ptr enter( table_ptr t, char* name, type_ptr type, int offset)
{
	table_entry_ptr t_entry = new table_entry;
	t_entry->proc = 0;
	t_entry->t = NULL;

	t_entry->inp_name = name;

	char temp[5];
	sprintf(temp,"%d",id_count++);

	t_entry->name += "id";
	t_entry->name += temp;

	t_entry->type = type;

	if(offset!=0 && offset!=-1)
	{
		t_entry->offset = offset;
		t_entry->width = type_width(type);
	}
	else if(offset==-1)
	{
		t_entry->offset = 0;
		t_entry->width = type_width(type);
	}
	else
	{
		t_entry->offset = offset_stack.top();

		t_entry->width = type_width(type);

		offset_stack.top() += t_entry->width;
	}

	string nam = t_entry->name;

	t->entries.insert( pair<string, table_entry_ptr >(nam, t_entry) ) ;
	return t_entry; 
}

void addwidth( table_ptr t, int width)
{
	t->width = width;
	return;
}

table_entry_ptr enter_proc( table_ptr t, char* name, type_ptr type, table_ptr child)
{
	table_entry_ptr t_entry = new table_entry;
	
	t_entry->proc = 1;
	
	t_entry->t = child;

	t_entry->inp_name = name;

	table_entry_ptr e = same_lookup(table_stack.top(), name, type->p1);

	if(e==NULL)
	{
		char temp[5];
		sprintf(temp,"%d",proc_id_count++);

		t_entry->name += "proc_id";
		t_entry->name += temp;
	}
	else
	{
		t_entry->name = e->name;
	}
	t_entry->width = 0;

	t_entry->type = type;
	
	string nam = t_entry->name;

	t->entries.insert( pair<string, table_entry_ptr >(nam, t_entry) ) ;

	string temp_label = t_entry->name + "<" + t_entry->inp_name + ">";
	labels.insert( pair< string, int >(temp_label, code_line));
	
	return t_entry; 
}


table_entry_ptr enter_proc2( table_ptr t, char* name, type_ptr type)
{
	table_entry_ptr t_entry = new table_entry;
	
	t_entry->proc = 1;

	t_entry->t = NULL;

	t_entry->inp_name = name;

	t_entry->name = name;
	
	t_entry->type = type;

	string nam = t_entry->name;

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
	t->stat=0;
	t->p1 = NULL; 
	t->p2 = NULL;
	t->type_name = NULL;

	switch(info){
		case LONGER : t->longer = 1; t->info = INTEGER; break;
		case SHORTER : t->shorter = 1; t->info = INTEGER; break;
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
	if ((t1->info!=NOTYPE && t2->info!=NOTYPE) && !(t1->info==t2->info && t1->info==INTEGER))
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

	if((t1->sign && t2->info==INTEGER && t2->sign) || (t1->unsign && t2->info==INTEGER && t2->unsign))
	{
		t1->info = INTEGER;
		return t1;
	}
	
	if((t1->longer && t2->info==INTEGER && t2->longer) || (t1->shorter && t2->info==INTEGER && t2->shorter))
	{
		return t1;
	}
	else
	{
		t1->info = ERROR;
		return t1;
	}

	if((t1->info==NOTYPE) && (t2->info==NOTYPE))
	{
		if(t1->extrn && t2->extrn) t1->info = ERROR;
		if(t1->regis && t2->regis) t1->info = ERROR;
		if(t1->stat && t2->stat) t1->info = ERROR;
		if(t1->volat && t2->volat) t1->info = ERROR;
		if(t1->constnt && t2->constnt) t1->info = ERROR;
		if(t1->type_name && t2->type_name) t1->info = ERROR;
	}

	t1->longer = t1->longer || t2->longer;
	t1->shorter = t1->shorter || t2->shorter ;
	t1->unsign = t1->unsign || t2->unsign;
	t1->sign = t1->sign || t2->sign;
	t1->extrn = t1->extrn || t2->extrn;
	t1->volat = t1->volat || t2->volat;
	t1->regis = t1->regis || t2->regis;
	t1->constnt = t1->constnt || t2->constnt;

	return t1;
}

type_ptr new_function_type(type_ptr t1, type_ptr t2)
{
	// function from type t1 to type t2
	type_ptr t= new type_node;
	t->info = FUNCTION;
	t->p1 = t1;
	t->p2 = t2;
	t->longer=0;
	t->shorter=0;
	t->unsign=0;
	t->sign=0;
	t->extrn=0;
	t->volat=0;
	t->constnt=0;
	t->regis=0;
	t->stat=0;
	t->type_name = NULL;
	return t;
}

type_ptr new_cartesian_type(type_ptr a, type_ptr t1)
{
	// returns type a*t1
	type_ptr t = new type_node;
	t->info = CARTESIAN;
	t->p1 = a;
	t->p2 = t1;
	t->longer =0;
	t->shorter=0;
	t->unsign=0;
	t->sign=0;
	t->extrn=0;
	t->volat=0;
	t->constnt=0;
	t->regis=0;
	t->stat=0;
	t->type_name = NULL;
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
	t->stat=0;
	t->type_name = NULL;
	return t;
}
type_ptr new_struct_type(type_ptr t1, char* type_name)
{
	// returns type pointer(t)
	type_ptr t = new type_node;
	t->info = STRCT;
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
	t->stat=0;
	t->type_name=type_name;
	return t;
}
type_ptr new_class_type(type_ptr t1, char* type_name)
{
	// returns type pointer(t)
	type_ptr t = new type_node;
	t->info = CLASSS;
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
	t->stat=0;
	t->type_name=type_name;
	return t;
}
type_ptr new_array_type(type_ptr t1, int size)
{
	// returns type pointer(t)
	type_ptr t = new type_node;
	t->info = ARRAY;
	t->array_size = size;
	t->p1 = t1;
	t->p2 = NULL;
	t->longer=0;
	t->shorter=0;
	t->unsign=0;
	t->sign=0;
	t->extrn=0;
	t->volat=0;		
	t->constnt=0;	
	t->regis=0;
	t->stat=0;
	t->type_name = NULL;
	return t;
}

int type_match (type_ptr t1, type_ptr t2)
{
	if(!(t1 && t2))
		return 0;

	if(t1->info == t2->info)
	{
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
	else return 0;
}


table_entry_ptr lookup ( table_ptr t, char* name)
{
	if(t==NULL) return NULL;

	string nam = name;
	map < string , table_entry_ptr > ::iterator i;
	for ( i = t->entries.begin() ; i != t->entries.end(); i++ )
	{
		
		table_entry_ptr e = i->second;
		if(e->inp_name==nam)
			return e;
		
	}
	return lookup(t->parent, name);

}

table_entry_ptr same_lookup ( table_ptr t, char* name, type_ptr t1)
{
	if(t==NULL) {return NULL;}
	string nam = name;
	map < string , table_entry_ptr > ::iterator i;
	for ( i = t->entries.begin() ; i != t->entries.end(); i++ )
	{
		table_entry_ptr e = i->second;
		if(e->inp_name==nam && e->type->info==FUNCTION)
		{
			if(t1 == NULL && e->type->p1==NULL) {return e;}
			else
			{
				if(type_compare(e->type->p1, t1)) {return e;}
			}
		}		
	}
	return same_lookup(t->parent, name, t1);
}

table_entry_ptr same_lookup1 ( table_ptr t, char* name, type_ptr t1)
{
	if(t==NULL) return NULL;

	string nam = name;
	map < string , table_entry_ptr > ::iterator i;
	for ( i = t->entries.begin() ; i != t->entries.end(); i++ )
	{
		
		table_entry_ptr e = i->second;
		if(e->inp_name==nam)
		{
			if(t1 == NULL) return e;
			else
			{	
				if(type_compare(e->type->p1, t1)) return e;
			}
		}
		
	}
	return NULL;
}

char* type_check3(string op, table_entry_ptr &entry_out, table_entry_ptr entry_in1)
{
	if(entry_in1 == NULL || entry_in1->type == NULL)
	{
		string terror = "No operand for operator \"" + op + "\"";
		char* type_error;
		type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
		strcpy(type_error, terror.c_str());
		entry_out = new table_entry;
		entry_out->type = new_basic_type(ERROR);
		return type_error;
	}
	type_ptr t1 = entry_in1->type;
	char name[8];
	string f_op;
	sprintf(name, "%s%d", "t-", count);
	if(op=="*")
	{
		if(t1->info==POINTER)
		{
			entry_out = enter(table_stack.top(), name, t1->p1, 0);
			count++;
			emit(V, entry_out->name, "=", "*", entry_in1->name);
			return NULL;
		}
	}
	else if(op=="&")
	{
		
		char tempo[12];
		strcpy(tempo, (entry_in1->inp_name).c_str());
		if(!(lookup(table_stack.top(), tempo)))
		{
			string terror = string(entry_in1->inp_name) + " is Undefined";
			char* type_error;
			type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
			strcpy(type_error, terror.c_str());
			entry_out = new table_entry;
			entry_out->type = new_basic_type(ERROR);
			return type_error;
		}
		else
		{
			type_ptr temp = new_pointer_type(t1);
			entry_out = enter(table_stack.top(), name, temp, 0);
			count++;
			char tempoww[10] ;
			sprintf(tempoww, "%d",lookup(table_stack.top(), tempo)->offset);
			emit(V, entry_out->name, "=", "BASE_POINTER", "+", tempoww);
			return NULL;
		}
	}
	else if(op=="~")
	{
		if(t1->info==INTEGER)
		{
			entry_out = enter(table_stack.top(), name, t1, 0);
			count++;
			emit(V, entry_out->name, "=", "~", entry_in1->name);
			return NULL;
		}
	}
	string terror = "Unable to perform \"" + op + "\" operation on Data type: \"" + print_type(t1) + "\""; 
    char* type_error;
    type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
    strcpy(type_error, terror.c_str());
	entry_out = new table_entry;
	entry_out->type = new_basic_type(ERROR);
	return type_error;
}

char* type_check4(string op, table_entry_ptr &entry_out, table_entry_ptr entry_in1, char* id)
{
	type_ptr t1 = entry_in1->type;
	table_ptr t2 = new table;
	if(!(lookup(struct_namespace, t1->type_name)))
	{
		if(!(lookup(class_namespace, t1->type_name)))
		{
			string terror = string(t1->type_name) + " is not a STRUCTURE or a CLASS";
			char* type_error;
			type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
			strcpy(type_error, terror.c_str());
			return type_error;
		}
		else
		{
			t2 = lookup(class_namespace, t1->type_name)->t;
		}
	}
	else
	{
		t2 = lookup(struct_namespace, t1->type_name)->t;
	}

	char name[8];
	string f_op;
	sprintf(name, "%s%d", "t-", count);
	if(op==".")
	{
		if(t1->info==STRCT)
		{
			if(!(lookup(t2, id)))
			{
				string terror = string(id) + " is not an attribute of the STRUCTURE";
				char* type_error;
				type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
				strcpy(type_error, terror.c_str());
				return type_error;
			}
			else
			{
				int offset = 0;
				table_entry_ptr temp = lookup(t2, id);
				offset = entry_in1->offset + temp->offset;
				if(offset==0){offset=-1;}
				type_ptr tetype = new type_node;
				type_ptr retype = lookup(t2, id)->type;
				tetype->info = retype->info;
				tetype->p1 = retype->p1;
				tetype->sign = retype->sign;
				tetype->unsign = retype->unsign;
				tetype->longer = retype->longer;
				tetype->shorter = retype->shorter;
				tetype->array_size = retype->array_size;
				tetype->param = t1->param;
				entry_out = enter(table_stack.top(), name, tetype, offset);
				count++;
				emit(V, entry_out->name, "=", entry_in1->name, ".", temp->name);
				return NULL;
			}
		}
		if(t1->info==CLASSS)
		{
			if(!(lookup(t2, id)))
			{
				string terror = string(id) + " is not an attribute of the CLASS";
				char* type_error;
				type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
				strcpy(type_error, terror.c_str());
				return type_error;
			}
			else
			{
				table_entry_ptr temp = lookup(t2, id);
				entry_out = enter(table_stack.top(), name, lookup(t2, id)->type, 0);
				count++;
				emit(V, entry_out->name, "=", entry_in1->name, ".", temp->name);
				return NULL;
			}
		}	
	}
	else if(op=="->")
	{
		if(t1->info==POINTER && t1->p1->info==STRCT)
		{
			if(lookup(struct_namespace, (entry_in1->type->p1->type_name))->t)
			{
				if(!(lookup(lookup(struct_namespace, (entry_in1->type->p1->type_name))->t, id)))
				{
					string terror = string(id) + " is not an attribute of the STRUCTURE";
					char* type_error;
					type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
					strcpy(type_error, terror.c_str());
					return type_error;
				}
				else
				{
					table_entry_ptr temp = (lookup(lookup(struct_namespace, (entry_in1->type->p1->type_name))->t, id));
					entry_out = enter(table_stack.top(), name, lookup(lookup(struct_namespace, (entry_in1->type->p1->type_name))->t, id)->type, 0);
					count++;
					emit(V, entry_out->name, "=", entry_in1->name, "->", temp->name);
					return NULL;
				}
			}
		}
		if(t1->info==POINTER && t1->p1->info==CLASSS)
		{
			if(lookup(class_namespace, (entry_in1->type->p1->type_name))->t)
			{
				if(!(lookup(lookup(class_namespace, (entry_in1->type->p1->type_name))->t, id)))
				{
					string terror = string(id) + " is not an attribute of the CLASS";
					char* type_error;
					type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
					strcpy(type_error, terror.c_str());
					return type_error;
				}
				else
				{
					table_entry_ptr temp = (lookup(lookup(class_namespace, (entry_in1->type->p1->type_name))->t, id));
					entry_out = enter(table_stack.top(), name, lookup(lookup(class_namespace, (entry_in1->type->p1->type_name))->t, id)->type, 0);
					count++;
					emit(V, entry_out->name, "=", entry_in1->name, "->", temp->name);
					return NULL;
				}
			}
		}
	}
	string terror = "Unable to perform \"" + op + "\" operation on Data type: \"" + print_type(t1) + "\" and Identifier: \"" + string(id) + "\""; 
    char* type_error;
    type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
    strcpy(type_error, terror.c_str());
	return type_error;
}

bool type_compare(type_ptr t1, type_ptr t2)
{
	if(t1 && t2)
	{
		if(t1->info==t2->info)
		{
			bool val = (t1->extrn^t2->extrn)|(t1->regis^t2->regis)|(t1->stat^t2->stat)|(t1->volat^t2->volat)|(t1->sign^t2->sign)|(t1->unsign^t2->unsign)|(t1->longer^t2->longer)|(t1->shorter^t2->shorter);
			if((!val) && t1->array_size == t2->array_size && t1->value == t2->value && (t1->type_name==NULL || t2->type_name==NULL || !strcmp(t1->type_name, t2->type_name)))
			{
				if(t1->p1==NULL && t2->p1==NULL)
				{
					if(t1->p2==NULL && t2->p2==NULL)
					{
						return true;
					}
					else
					{
						return type_compare(t1->p2,t2->p2);
					}
				}
				else
				{
					if(t1->p2==NULL && t2->p2==NULL)
					{
						return type_compare(t1->p1,t2->p1);
					}
					else
					{
						return (type_compare(t1->p1,t2->p1) & type_compare(t1->p2,t2->p2));
					}
				}
			}
		}
	}
	return false;
}


char* type_check2(string op, table_entry_ptr &entry_out, table_entry_ptr entry_in1, table_entry_ptr entry_in2)
{
	type_ptr t1;
	if(entry_in1)
		t1 = entry_in1->type;
	else 
		t1 = NULL;
	type_ptr t2;
	if(entry_in2)
		t2 = entry_in2->type;
	else
		t2 = NULL;
	char name[8];
	string f_op;
	sprintf(name, "%s%d", "t-", count);
	if(t1)
	if(op=="[]")
	{
		if(t2->info==INTEGER || t2->info==CHR)
		{
			if(t1->info==ARRAY || t1->info==POINTER)
			{
				if (t1->info==ARRAY && t2->constnt && t1->array_size<=t2->value)
				{
					string terror = "Array Out of Bounds Error";
					char* type_error;
    				type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
    				strcpy(type_error, terror.c_str());
    				entry_out = new table_entry;
    				entry_out->type = new_basic_type(ERROR);
					return type_error;
				}
				type_ptr tetype = new type_node;
				tetype->info = DEPTR;
				tetype->p1 = t1->p1;
				entry_out = enter(table_stack.top(), name, tetype, 0);
				count++;
				f_op = "[" + entry_in2->name + "]";
				emit(V, entry_out->name, "=", entry_in1->name, f_op);
				return NULL;
			}
		}
	}
	else if(op=="()")
	{
		if(t1->info==FUNCTION)
		{
			if(t2)
			{
				if(type_compare(t1->p1,t2))
				{
					entry_out = enter(table_stack.top(), name, t1->p2, 0);
					count++;
					//f_op = "(" + entry_in2->name + ")";
					// emit(V, name, "=", entry_in1->name, f_op);
					return NULL;
				}
				else
				{
					string terror = "Type mismatch between expected arguments and passed arguments of the FUNCTION";
					char* type_error;
    				type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
    				strcpy(type_error, terror.c_str());
    				entry_out = new table_entry;
    				entry_out->type = new_basic_type(ERROR);
					return type_error;
				}
			}
			else
			{
				entry_out = enter(table_stack.top(), name, t1->p2, 0);
				count++;
				return NULL;
			}
		}
	}
	string terror;
	if(!t2)
	{
		terror = "Unable to perform \"" + op + "\" operation on Data type: \"" + print_type(t1) + "\"";
	}
	else
	{
		terror = "Unable to perform \"" + op + "\" operation on Data types: \"" + print_type(t1) + "\" and \"" + print_type(t2) + "\"";
	}	 
    char* type_error;
    type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
    strcpy(type_error, terror.c_str());
	entry_out = new table_entry;
	entry_out->type = new_basic_type(ERROR);
	return type_error;
}

char* type_check(string op, table_entry_ptr &entry_out, table_entry_ptr entry_in1, table_entry_ptr entry_in2)
{
	string f_op;
	type_ptr t1 = entry_in1->type;
	type_ptr t2 = entry_in2->type;
	char name[8];
	sprintf(name, "%s%d", "t-", count); 

	if(op=="*" || op=="/" || op=="+" || op=="-" )
	{
		if(t1->info==INTEGER && t2->info==INTEGER)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			entry_out->type->unsign = t1->unsign & t2->unsign;
			entry_out->type->longer = t1->longer | t2->longer;
			entry_out->type->shorter = t1->shorter & t2->shorter;

			f_op = "int" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==FLT && t2->info==FLT)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==DBL && t2->info==DBL)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==CHR && t2->info==CHR || t1->info==CHR && t2->info==INTEGER || t1->info==INTEGER && t2->info==CHR)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			entry_out->type->unsign = t1->unsign & t2->unsign;
			f_op = "int" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==FLT && (t2->info==INTEGER || t2->info==CHR))
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			temp->type->constnt = t2->constnt;
			emit(V,temp->name,"=","cast_to_float (",entry_in2->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to FLOAT") : warning("Implicit Typecast from CHAR to FLOAT");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,temp->name);
			return NULL;
		}
		else if((t1->info==INTEGER || t1->info==CHR) && t2->info==FLT)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			temp->type->constnt = t1->constnt;
			emit(V,temp->name,"=","cast_to_float (",entry_in1->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to FLOAT") : warning("Implicit Typecast from CHAR to FLOAT");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",temp->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==DBL && (t2->info==INTEGER || t2->info==CHR))
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t2->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in2->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to DOUBLE") : warning("Implicit Typecast from CHAR to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,temp->name);
			return NULL;
		}
		else if((t1->info==INTEGER || t1->info==CHR) && t2->info==DBL)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t1->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in1->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to DOUBLE") : warning("Implicit Typecast from CHAR to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",temp->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==DBL && t2->info==FLT)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t2->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in2->name,")");
			warning("Implicit Typecast from FLOAT to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,temp->name);
			return NULL;
		}
		else if(t1->info==FLT && t2->info==DBL)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t1->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in1->name,")");
			warning("Implicit Typecast from FLOAT to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '+': entry_out->type->value = t1->value + t2->value; break;
					case '-': entry_out->type->value = t1->value - t2->value; break;
					case '*': entry_out->type->value = t1->value * t2->value; break;
					case '/': entry_out->type->value = t1->value / t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",temp->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==POINTER && (t2->info==INTEGER || t2->info==CHR))
		{
			entry_out = enter(table_stack.top(), name, new_pointer_type(t1->p1), 0);
			count++;
			f_op = "pointer" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if((t1->info==INTEGER || t1->info==CHR) && t2->info==POINTER)
		{
			entry_out = enter(table_stack.top(), name, new_pointer_type(t2->p1), 0);
			count++;
			f_op = "pointer" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
	}
	else if(op=="%" || op=="<<" || op==">>" || op=="&" || op == "|" || op == "^")
	{
		if(t1->info==INTEGER && t2->info==INTEGER)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '%': entry_out->type->value = t1->value % t2->value; break;
					case '<': entry_out->type->value = t1->value << t2->value; break;
					case '>': entry_out->type->value = t1->value >> t2->value; break;
					case '&': entry_out->type->value = t1->value & t2->value; break;
					case '|': entry_out->type->value = t1->value | t2->value; break;
					case '^': entry_out->type->value = t1->value ^ t2->value; break;
					default: break;
				}
			}
			entry_out->type->unsign = t1->unsign & t2->unsign;
			entry_out->type->longer = t1->longer | t2->longer;
			entry_out->type->shorter = t1->shorter & t2->shorter;
			f_op = "int" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==CHR && t2->info==CHR || t1->info==CHR && t2->info==INTEGER || t1->info==INTEGER && t2->info==CHR)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '%': entry_out->type->value = t1->value % t2->value; break;
					case '<': entry_out->type->value = t1->value << t2->value; break;
					case '>': entry_out->type->value = t1->value >> t2->value; break;
					case '&': entry_out->type->value = t1->value & t2->value; break;
					case '|': entry_out->type->value = t1->value | t2->value; break;
					case '^': entry_out->type->value = t1->value ^ t2->value; break;
					default: break;
				}
			}
			entry_out->type->unsign = t1->unsign & t2->unsign;
			f_op = "int" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
	}
	else if(op=="<" || op==">" || op=="<=" || op==">=" || op=="==" || op=="!=")
	{
		if(t1->info==INTEGER && t2->info==INTEGER)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			entry_out->type->unsign = t1->unsign & t2->unsign;
			entry_out->type->longer = t1->longer | t2->longer;
			entry_out->type->shorter = t1->shorter & t2->shorter;
			f_op = "int" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==FLT && t2->info==FLT)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==DBL && t2->info==DBL)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==CHR && t2->info==CHR || t1->info==CHR && t2->info==INTEGER || t1->info==INTEGER && t2->info==CHR)
		{
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			entry_out->type->unsign = t1->unsign & t2->unsign;
			f_op = "int" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==FLT && (t2->info==INTEGER || t2->info==CHR))
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			temp->type->constnt = t2->constnt;
			emit(V,temp->name,"=","cast_to_float (",entry_in2->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to FLOAT") : warning("Implicit Typecast from CHAR to FLOAT");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,temp->name);
			return NULL;
		}
		else if((t1->info==INTEGER || t1->info==CHR) && t2->info==FLT)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(FLT), 0);
			count++;
			temp->type->constnt = t1->constnt;
			emit(V,temp->name,"=","cast_to_float (",entry_in1->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to FLOAT") : warning("Implicit Typecast from CHAR to FLOAT");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",temp->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==DBL && (t2->info==INTEGER || t2->info==CHR))
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t2->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in2->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to DOUBLE") : warning("Implicit Typecast from CHAR to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,temp->name);
			return NULL;
		}
		else if((t1->info==INTEGER || t1->info==CHR) && t2->info==DBL)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t1->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in1->name,")");
			t1->info==INTEGER ? warning("Implicit Typecast from INTEGER to DOUBLE") : warning("Implicit Typecast from CHAR to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",temp->name,f_op,entry_in2->name);
			return NULL;
		}
		else if(t1->info==DBL && t2->info==FLT)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t2->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in2->name,")");
			warning("Implicit Typecast from FLOAT to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",entry_in1->name,f_op,temp->name);
			return NULL;
		}
		else if(t1->info==FLT && t2->info==DBL)
		{
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(DBL), 0);
			count++;
			temp->type->constnt = t1->constnt;
			emit(V,temp->name,"=","cast_to_double (",entry_in1->name,")");
			warning("Implicit Typecast from FLOAT to DOUBLE");
			sprintf(name, "%s%d", "t-", count);
			entry_out = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_out->type->constnt = t1->constnt & t2->constnt;
			if(t1->constnt && t2->constnt)
			{
				switch(op[0])
				{
					case '<': if(op.length()==1) { entry_out->type->value = t1->value < t2->value; } else { entry_out->type->value = t1->value <= t2->value; } break;
					case '>': if(op.length()==1) { entry_out->type->value = t1->value > t2->value; } else { entry_out->type->value = t1->value >= t2->value; } break;
					case '=': entry_out->type->value = t1->value == t2->value; break;
					case '!': entry_out->type->value = t1->value != t2->value; break;
					default: break;
				}
			}
			f_op = "real" + op;
			emit(V,entry_out->name,"=",temp->name,f_op,entry_in2->name);
			return NULL;
		}
	}
	else if(op=="*=" || op=="/=" || op == "+=" || op == "-=" || op=="&=" || op == "|=" || op == "^=" || op=="%=" || op=="<<=" || op==">>=")
	{
		if(entry_in2->truelist.size() || entry_in2->falselist.size())
		{
			sprintf(name, "%s%d", "t-", count);
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_in2->falselist.push_back(code_line);
			emit(V, "if(", entry_in2->name, "== 0) goto");
			backpatch(V, entry_in2->truelist, code_line);
			emit(V, temp->name, "= 1");
			temp->truelist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, entry_in2->falselist, code_line);
			emit(V, temp->name, "= 0");
			backpatch(V, temp->truelist, code_line);
			temp->truelist.resize(0);
			entry_in2 = temp;
		}
		table_entry_ptr temp;
		string oper;
		oper = op.substr(0, op.size()-1);
		if(char *s = type_check(oper, temp, entry_in1, entry_in2)) return s;
	    return type_check("=", entry_out, entry_in1, temp);
	}
	else if(op=="=")
	{
		if(entry_in2->truelist.size() || entry_in2->falselist.size())
		{
			sprintf(name, "%s%d", "t-", count);
			table_entry_ptr temp = enter(table_stack.top(), name, new_basic_type(INTEGER), 0);
			count++;
			entry_in2->falselist.push_back(code_line);
			emit(V, "if(", entry_in2->name, "== 0) goto");
			backpatch(V, entry_in2->truelist, code_line);
			emit(V, temp->name, "= 1");
			temp->truelist.push_back(code_line);
			emit(V, "goto");
			backpatch(V, entry_in2->falselist, code_line);
			emit(V, temp->name, "= 0");
			backpatch(V, temp->truelist, code_line);
			entry_in2 = temp;
		}
		if(t1->info == INTEGER || t1->info == FLT || t1->info==CHR || t1->info==DBL )
		{
			if(t1->info == t2->info)
			{
				emit(V,entry_in1->name,"=",entry_in2->name);
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->info == INTEGER && ( t2->info == FLT || t2->info == CHR || t2->info == DBL  ) )
			{
				emit(V, entry_in1->name, "= cast_to_int (", entry_in2->name,")");
				warning("Implicit Typecast to INTEGER");
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->info == CHR && ( t2->info == FLT || t2->info == INTEGER || t2->info == DBL  ) )
			{
				emit(V, entry_in1->name, "= cast_to_int (", entry_in2->name,")");
				warning("Implicit Typecast to CHAR");
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->info == FLT && ( t2->info == INTEGER || t2->info == CHR || t2->info == DBL  ) )
			{
				emit(V, entry_in1->name, "= cast_to_float (", entry_in2->name,")");
				warning("Implicit Typecast to FLOAT");
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->info == DBL && ( t2->info == FLT || t2->info == CHR || t2->info == INTEGER  ) )
			{
				emit(V, entry_in1->name, "= cast_to_double (", entry_in2->name,")");
				warning("Implicit Typecast to DOUBLE");
				entry_out = entry_in1;
				return NULL;
			}
		}
		else if(t1->info == DEPTR)
		{
			if(t1->p1->info == t2->info)
			{
				emit(V,"*",entry_in1->name,"=",entry_in2->name);
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->p1->info == INTEGER && ( t2->info == FLT || t2->info == CHR || t2->info == DBL  ) )
			{
				emit(V,"*", entry_in1->name, "= cast_to_int (", entry_in2->name,")");
				warning("Implicit Typecast to INTEGER");
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->p1->info == CHR && ( t2->info == FLT || t2->info == INTEGER || t2->info == DBL  ) )
			{
				emit(V,"*", entry_in1->name, "= cast_to_int (", entry_in2->name,")");
				warning("Implicit Typecast to CHAR");
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->p1->info == FLT && ( t2->info == INTEGER || t2->info == CHR || t2->info == DBL  ) )
			{
				emit(V,"*", entry_in1->name, "= cast_to_float (", entry_in2->name,")");
				warning("Implicit Typecast to FLOAT");
				entry_out = entry_in1;
				return NULL;
			}
			else if(t1->p1->info == DBL && ( t2->info == FLT || t2->info == CHR || t2->info == INTEGER  ) )
			{
				emit(V,"*", entry_in1->name, "= cast_to_double (", entry_in2->name,")");
				warning("Implicit Typecast to DOUBLE");
				entry_out = entry_in1;
				return NULL;
			}
		}
	}
	
	string terror = "Unable to perform \"" + op + "\" operation on Data types: \"" + print_type(t1) + "\" and \"" + print_type(t2) + "\""; 
    char* type_error;
    type_error = (char *)malloc((terror.length()+1)*sizeof(char));  
    strcpy(type_error, terror.c_str());
	entry_out = new table_entry;
	entry_out->type = new_basic_type(ERROR);
	return type_error;
}