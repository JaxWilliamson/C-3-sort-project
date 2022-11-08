#include <iostream>
using namespace std;

void bubbleSort(int a[], int n, int way)
{
    int i, j;
    switch (way)
    {
    case 1:
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (a[j] < a[j + 1])
                    swap(a[j], a[j + 1]);
        break;
    case 2:
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);
    }
}