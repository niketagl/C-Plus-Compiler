int main()
{
    int i, n;
    int first, last, middle;
    int search;

    n = _inputints();
    int array[100];
    for(int i=0; i<n; i++)
    {
        int x;
        x = _inputints();
        array[i] = x;
    }

    search = _inputints();


    first = 0;
    last = n-1;
    middle = (first + last)/2;

    while (first <= last)
    {
        int temp = array[middle];
        if ( temp < search)
            first = middle + 1;
        else if (temp == search)
        {
            int ans = middle;
            _printints(ans);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
    {
        int x = -1;
        _printints(x);
    }
}