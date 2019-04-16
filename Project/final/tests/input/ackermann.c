int ackermann(int m, int n)
{
        if (!m) return n + 1;
        if (!n) return ackermann(m - 1, 1);
        return ackermann(m - 1, ackermann(m, n - 1));
}
 
int main()
{
        int a, m, n;
        m = 3;
        n = 2;

        a = ackermann(m, n);

        _printints(a);
}