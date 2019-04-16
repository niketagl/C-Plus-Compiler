int main()
{
	int a,b;
	b = 3;
	a = ((b + (b * (b + 1))) - b) || (b != 3);
	_printints(a);
}