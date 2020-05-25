#include "../../includes/checker.h"

void    ra(int *a, int len)
{
    int temp;
    int i;
    i = 0;
    if (a)
    {
        temp = a[0];
        while (i < len)
        {
            a[i] = a[i + 1];
            i++;
        };
        a[len - 1] = temp;
    }
    clean_arr(a, len);
};
void    rb(int *b, int len)
{
    int temp;
    int i;
    i = 0;
    len = len + 11;
    if (b)
    {
        temp = b[0];
        while (i < len)
        {
            b[i] = b[i + 1];
            i++;
        };
        b[len - 1] = temp;
    }
    clean_arr(b, len);
};
void    rr(int *a, int *b, int len)
{
    ra(a, len);
    rb(b, len);
};
