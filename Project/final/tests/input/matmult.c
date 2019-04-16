int main()
{
	int m1, n1;
	m1 = _inputints();
	n1 = _inputints();
	
	int p1 = m1*n1;
	
	int a1[100];

	for(int i=0; i<p1; i++)
    {
        int x;
        x = _inputints();
        a1[i] = x;
    }

	int m2, n2;
	m2 = _inputints();
	n2 = _inputints();
	
	int p2 = m2*n2;
	
	int a2[100];

	for(int i=0; i<p2; i++)
    {
        int x;
        x = _inputints();
        a2[i] = x;
    }

	if(n1 != m2)
	{
		int err = -1;
		_printints(err);
	}
	else
	{
		int ans[100];
		for(int i = 0; i<m1; i++)
		{
			for(int j = 0; j<n2; j++)
			{
				int temp = 0;
				for(int k=0; k<n1; k++)
				{
					int temp2, temp3, x, y;
					x = (n1*i) + k;
					y = (n2*k) + j;
					temp2 = a1[x];
					temp3 = a2[y];
					temp = temp + (temp2*temp3);
				}
				int z;
				z = (m1*i) + j;
				ans[z] = temp;
			}
		}
	}
	int lim = m1*n2;
	for(int i=0; i< lim; i++)
	{
		int x;
		x = ans[i];
		_printints(x);
	}
}