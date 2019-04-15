int fib(int a)
{
	int b;
	b=1;
	if(a==b)
		return 1;
	b=0;
	if(a==b)
		return 1;
	b=1;
	return fib(a-b) + fib(a-b-b);
}

int main()
{

	int a,b;
	a = 4;
	
	b = fib(a);
	_printints(b);
}