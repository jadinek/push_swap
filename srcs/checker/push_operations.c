#include "../../includes/checker.h"

void    pa(int *a, int *b, int len)
{
    int b_len;
    int temp;
    int i;
    b_len = len + 11;
    i = 0;
    clean_arr(b, len);
    if (b[0] != -999)
    {
        temp = b[0];
        while (i < b_len)
        {
            b[i] = b[i + 1];
            i++;
        };
        b[b_len - 1] = -999;

        i = 0;
        while (i < len)
        {
            a[len - 1] = a[len - 2];
            len--;
        };
        a[0] = temp;
    }
};
void    pb(int *a, int *b, int len)
{
    int b_len;
    int temp;
    int i;
    i = 0;
    b_len = len + 11;
    if (a)
    {
        temp = a[0];
        while (i < len)
        {
            a[i] = a[i + 1];
            i++;
        };
        a[len - 1] = -999;

        i = 0;
        while (i < b_len)
        {
            b[b_len - 1] = b[b_len - 2];
            b_len--;
        };
        b[0] = temp;
    }
};
