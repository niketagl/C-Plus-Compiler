int ackermann(int m, int n)
{
        if (m == 0)
        {
            return n + 1;
        } 
        int b;
        b=1;
        if (n == 0)
        {
            return ackermann(m-1, b);
        } 
        int x;
        x = ackermann(m, n-1);
        return ackermann(m-1, x);
}
 
int main()
{
        int a, m, n;
        m = 3;
        n = 2;

        a = ackermann(m, n);

        _printints(a);
}