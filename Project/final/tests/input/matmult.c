int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	b[0][0]=1;
	b[0][1]=2;
	b[1][0]=3;
	b[1][1]=4;
	int n=2;
	int c,d,k;
	for (c = 0; c < n; c++) 
	{
		for (d = 0; d < n; d++) 
		{
			for (k = 0; k < n; k++) 
			{
          		sum = sum + a[c][k]*a[k][d];
        	}
        	c[c][d] = sum;
        	sum = 0;
      	}
    }
    _printints(c[0][0]);
    _printints(c[0][1]);
    _printints(c[1][0]);
    _printints(c[1][1]);
}