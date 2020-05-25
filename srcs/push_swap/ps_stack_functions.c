#include "../../includes/push_swap.h"

int     get_len(char *argv1)
{
    char **arr;
    int i;
    int len;

    arr = (ft_strsplit(argv1, ' '));
    i = 0;
    len = 0;
    while (arr[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

void    clean_arr(int *arr, int n)
{
    int i;
    int count;

    i = 0;
    count = 0;

    while (i < n){
        if (arr[i] != -999)
            arr[count++] = arr[i];
        i++;
    }
    while (count < n)
        arr[count++] = -999;
}

int     check_duplicate(int *a, int len)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (i < len){
        while (j < len){
            if (a[i] == a[j])
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int     is_sorted(int *arr, int n)
{
    if (n == 1 || n == 0)
        return 1;

    if (arr[n - 1] < arr[n - 2] && arr[n - 1] != -999 && arr[n - 2] != -999)
        return 0;

    return is_sorted(arr, n - 1);
}

int     is_empty(int *b, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        if (b[i] != -999)
            return 0;
        i++;
    }
    return 1;
}