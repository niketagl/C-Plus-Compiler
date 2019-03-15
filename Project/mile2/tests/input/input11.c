struct typenode
{
    char* info;
	int array_size;
	int value;
	char* type_name;
};

struct table
{	
	struct typenode *parent;
	char* name;
	char* scope;
	int width;
};

int main()
{
    struct typenode strct1;
    struct table strct2;
    struct table_entry strct3;
    int a, b, c;

    strct1.value;
    strct2->name;
    strct1.scope;
}