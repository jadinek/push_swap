#include "../../includes/push_swap.h"

void    sa(int *a, int len)
{
    int temp;
    if (len >= 2)
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
    ft_putstr("sa\n");
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
    ft_putstr("sb\n");
};
void    ss(int *a, int *b, int len)
{
    sa(a, len);
    sb(b, len);
    ft_putstr("ss\n");
};
void    pa(int *a, int *b, int len)
{
    int b_len = len + 11;
    clean_arr(b, b_len);
    int temp;
    int i = 0;
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
    ft_putstr("pa\n");
};
void    pb(int *a, int *b, int len)
{
    int temp;
    int i = 0;
    int b_len = len + 11;
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
    ft_putstr("pb\n");
};
void    ra(int *a, int len)
{
    int temp;
    int i = 0;
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
    ft_putstr("ra\n");
    clean_arr(a, len);
};
void    rb(int *b, int len)
{
    len = len + 11;
    int temp;
    int i = 0;
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
    ft_putstr("rb\n");
    clean_arr(b, len);
};
void    rr(int *a, int *b, int len)
{
    ra(a, len);
    rb(b, len);
    ft_putstr("rr\n");
};
void    rra(int *a, int len)
{
    int temp;
    int i = 0;
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
    ft_putstr("rra\n");
    clean_arr(a, len);
};
void    rrb(int *b, int len)
{
    int temp;
    int i = 0;
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
    ft_putstr("rrb\n");
    clean_arr(b, len);
};
void    rrr(int *a, int *b, int len)
{
    rra(a, len);
    rrb(b, len);
    ft_putstr("rrr\n");
};
