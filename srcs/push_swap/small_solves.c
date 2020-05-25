#include "../../includes/push_swap.h"

void    solve_only_3(int *a, int len)
{
    int l;

    if (is_sorted(a, len))
        return;
    l = largest(a, len);
    if (a[2] == l)
        sa(a, len);
    else if (a[0] == l)
    {
        ra(a, len);
        if (is_sorted(a, len))
            return;
        else
            sa(a, len);
    }
    else
    {
        sa(a, len);
        ra(a, len);
        if (is_sorted(a, len))
            return;
        else
            sa(a, len);
    }
}
void    solve3(int *a, int *b, int len)
{
    int l;
    int s;

    if (is_sorted(a, len))
        return;
    l = largest(a, 3);
    s = smallest(a, 3);
    if (a[2] == l){
        sa(a, len);
        return;
        }
    else if (a[0] == s){
        pb(a, b, len);
        sa(a, len);
        pa(a, b, len);
        return;
    }
    else if(a[0] == l){
        sa(a, len);
    }
    pb(a, b, len);
    sa(a, len);
    pa(a, b, len);
    if (!is_sorted(a, len))
        sa(a, len);
}
void    solve4(int *a, int *b, int len)
{
    int s;

    if (is_sorted(a, len))
        return;
    s = smallest(a, len);
    if(a[1] == s)
        ra(a, len);
    else if(a[2] == s){
        rra(a, len);
        rra(a, len);
    }
    else if(a[3] == s){
        rra(a, len);
    }
    pb(a, b, len);
    solve3(a, b, len);
    pa(a, b, len);
}