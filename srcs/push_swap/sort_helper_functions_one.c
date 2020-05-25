#include "../../includes/push_swap.h"

void    after_split(int *a, int *b, int *c, int len)
{
    //push placeholder onto b
    int b_len = len + 11;
    int i = 0;
    int l = len;

    while (i < b_len)
    {
        b[b_len - 1] = b[b_len - 2];
        b_len--;
    };
    b[0] = 999;

    // make c=a
    i = 0;
    while (i < l)
    {
        c[i] = a[i];
        i++;
    }
}

void    remove_placeholder(int *arr, int n)
{
    int i = 0;

    if (arr[0] == 999)
    {
        arr[0] = -999;
        clean_arr(arr, n);
        return;
    }
    while (arr[i] != 999)
        i++;

    if (i != n)
    {
        arr[i] = -999;
        clean_arr(arr, n);
    }
}

void    add_placeholder(int *arr, int n)
{
    int i = 0;
    while (i < n)
    {
        arr[n - 1] = arr[n - 2];
        n--;
    };
    arr[0] = 999;
}
