#include "../../includes/push_swap.h"

int     smallest(int *a, int len)
{
    int i;
    int smallest;
    i = 0;
    smallest = a[i];
    while (i < len)
    {
        if (a[i] < smallest && a[i] != -999)
            smallest = a[i];
        i++;
    }
    return smallest;
}
int     largest(int *a, int len)
{
    int i;
    int l;

    i = 0;
    l = a[i];
    while (i < len)
    {
        if (a[i] > l)
            l = a[i];
        i++;
    }
    return l;
}
int     get_median(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    return (a[n / 2]);
}
