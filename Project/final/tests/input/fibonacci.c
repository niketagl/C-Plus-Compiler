int main()
{
    int i = 1;
    int n = 10;
    int a = 0;
    int b = 1;
    int next;

    while(i<=n)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = a + b;
            a = b;
            b = next;
        }
        _printints(next);
        i++;
    }
}