struct node
{
    int a;
};

int fun(struct node x)
{
    return (x.a + 1);
}

int main()
{
    struct node alpha;
    int b = 3;
    alpha.a = b;
    _printints(fun(alpha));
}