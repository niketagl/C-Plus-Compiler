int main()
{
	int a[2];
	int b[2];
	int e[2];
	a[0]=1;
	a[1]=3;
	b[0]=1;
	b[1]=4;

	int n=2;
	int c;
	int sum = 0;
	for (c = 0; c < n; c++) 
	{
        int l = a[c];
		int r = b[c];
		sum = sum + l*r;
        e[c] = sum;
        sum = 0;
    }
	int ans1 = c[0];
	int ans2 = c[1];
    _printints(ans1);
    _printints(ans2);
}