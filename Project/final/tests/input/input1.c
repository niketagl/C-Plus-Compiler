int fun(int a[10], int b)
{
	return a[0] + a[1] + a[2] + b;
}
int main()
{
	int a[10],b,c;
	a[0]=1;
	a[1]=2;
	a[2]=3;
	c = fun(a,b);
	_printints(c);
}