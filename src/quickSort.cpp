void quickSort(int v[], int st, int dr, int way)
{
    switch (way)
    {
    case 1:
        if (st < dr)
        {
            int m = (st + dr) / 2;
            int aux = v[st];
            v[st] = v[m];
            v[m] = aux;
            int i = st, j = dr, d = 0;
            while (i < j)
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                    d = 1 - d;
                }
                i += d;
                j -= 1 - d;
            }
            quickSort(v, st, i - 1, way);
            quickSort(v, i + 1, dr, way);
        }

    case 2:
        if (st < dr)
        {
            int m = (st + dr) / 2;
            int aux = v[st];
            v[st] = v[m];
            v[m] = aux;
            int i = st, j = dr, d = 0;
            while (i < j)
            {
                if (v[i] < v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                    d = 1 - d;
                }
                i += d;
                j -= 1 - d;
            }
            quickSort(v, st, i - 1, way);
            quickSort(v, i + 1, dr, way);
        }
    }
}