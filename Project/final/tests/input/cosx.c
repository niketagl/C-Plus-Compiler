void main()
{
    int n;
    float term, denominator, x, cosx;
 
    x = 90;
    /*  Converting degrees to radians */
    x = x * (3.142 / 180.0);
    term = x;
    cosx = term;
    n = 1;
    do
    {
        denominator = 2 * n * (2 * n - 1);
        term = -term * x * x / denominator;
        cosx = cosx + term;
        n = n + 1;
    } while (n!=100);
}