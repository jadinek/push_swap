#include "../../includes/checker.h"

void    rra(int *a, int len)
{
    int temp;
    int i;
    i = 0;
    if (a)
    {
        while (a[len - 1] == -999)
            len--;
        temp = a[len - 1];
        while (i < len)
        {
            a[len - 1] = a[len - 2];
            len--;
        };
        a[0] = temp;
    };
    clean_arr(a, len);
};
void    rrb(int *b, int len)
{
    int temp;
    int i;
    i = 0;
    len = len + 11;
    if (b)
    {
        temp = b[len - 1];
        while (i < len)
        {
            b[len - 1] = b[len - 2];
            len--;
        };
        b[0] = temp;
    }
    clean_arr(b, len);
};
void    rrr(int *a, int *b, int len)
{
    rra(a, len);
    rrb(b, len);
};
