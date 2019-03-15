struct meratype
{
    int* meravar1;
    char meravar2;
    double meravar3;
};

int main()
{
    struct meratype kuch;
    char a = kuch.meravar2;
    --a;
    kuch.meravar4;
    int *b = kuch.meravar1;
}