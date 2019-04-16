int main()
{
	int a[6];

	for(int i=0; i<6; i++)
	{
		int x;
		x = _inputints();
		a[i] = x;
	}

	int flag=1;

	while(flag==1)
	{
		flag = 0;
		for(int i=0; i<5; i++)
		{
			int y = i+1;
			int temp1, temp2;
			temp1 = a[i];
			temp2 = a[y];
				
			if(temp2<temp1) //swap 
			{
				a[i] = temp2;
				a[y] = temp1;
				flag = 1;
			}
		}
	}


	for(int i=0; i<6; i++)
	{
		int y;
		y = a[i];
		_printints(y);
	}


}