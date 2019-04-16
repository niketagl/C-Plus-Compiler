int even(int n);

int odd(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return even(n-1);
    }
}

int even(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return odd(n-1);
    }
}

int main()
{
    int a = 356;
    int ans = even(a);
    _printints(ans);
       
}