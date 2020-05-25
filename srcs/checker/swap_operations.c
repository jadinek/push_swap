#include "../../includes/checker.h"

void    sa(int *a, int len)
{
    int temp;
    if (len >= 2)
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
};
void    sb(int *b, int len)
{
    int temp;
    if (len >= 2)
    {
        temp = b[0];
        b[0] = b[1];
        b[1] = temp;
    }
};
void    ss(int *a, int *b, int len)
{
    sa(a, len);
    sb(b, len);
};