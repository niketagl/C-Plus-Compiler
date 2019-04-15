int add(int a, int b)
{
	return a * b;
}

int main()
{

	int a,b;
	a = 3;
	b = 3;
	if(a==b)
	{
		b=7;
		b+=a;
	}
	else
		b=9;

	_printints(b);
}