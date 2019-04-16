int main()
{
    int i, n;
    int first, last, middle;
    int search;

    n = 10;
    int array[] = {1, 3, 5, 6, 7, 10, 13, 16, 19, 25};

    first = 0;
    last = n-1;
    middle = (first + last)/2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            int ans = middle + 1;
            _printints(ans);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        _printints(-1);

    return 0;
}