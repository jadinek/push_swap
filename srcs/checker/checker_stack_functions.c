#include "../../includes/checker.h"

void    clean_arr(int *arr, int n)
{
    int count;
    int i;

    count = 0;
    i = 0;

    while(i < n){
        if (arr[i] != -999)
            arr[count++] = arr[i];
        i++;
    }
    while (count < n)
        arr[count++] = -999;
}

int     get_len(char *argv1)
{
    int i;
    int len;
    char **arr;

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

int check_duplicate(int *a, int len){
    for(int i = 0; i < len; i++) {  
        for(int j = i + 1; j < len; j++) {  
            if(a[i] == a[j])  
                return 1;
        }  
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
