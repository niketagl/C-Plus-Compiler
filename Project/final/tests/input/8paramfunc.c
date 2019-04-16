int fun(int a, int b, int c, int d, int e, int f, int g, int h)
{
    return a + b + c + d + e + f + g + h;
}

int main()
{
    int a = 1, b = 2;
    int c = 3, d = 4, e = 5, f = 6, g = 7, h = 8;
    
    _printints(fun(a, b, c, d, e, f, g, h));
}