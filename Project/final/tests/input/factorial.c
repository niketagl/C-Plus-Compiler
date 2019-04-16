int fac(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        int ans;
        ans = n*fac(n-1);
        return ans;
    }
}

int main()
{
    int a;
    a = 12;
    int b;
    b = fac(a);
    _printints(b);
}