void insertionSort(int a[], int n, int way)
{
    int i, key, j;
    switch (way)
    {
    case 1:
        for (i = 1; i < n; i++)
        {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] < key)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
        break;
    case 2:
    {
        for (i = 1; i < n; i++)
        {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > key)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
    }
    }
}