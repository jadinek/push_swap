#include "../../includes/push_swap.h"

void    solve_only_3(int *a, int len)
{
    if (is_sorted(a, len))
        return;
    int l = largest(a, len);
    if (a[2] == l)
    {
        sa(a, len);
    }
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
    // printf("%d ", len);
    // printf("%d ", a[0]);
    // printf("%d ", a[1]);
    // printf("%d \n", a[2]);
    if (is_sorted(a, len))
        return;
    int l = largest(a, 3);
    int s = smallest(a, 3);
    if (a[2] == l)
    {
        sa(a, len);
    }
    else if (a[0] == s){
        pb(a, b, len);
        sa(a, len);
        pa(a, b, len);
    }
    else if(a[0] == l){
        sa(a, len);
        if(a[0] == s){
            pb(a, b, len);
            sa(a, len);
            pa(a, b, len);
        }
        else{
        pb(a, b, len);
        sa(a, len);
        pa(a, b, len);
        sa(a, len);
    }
    }
    else{
        pb(a, b, len);
        sa(a, len);
        pa(a, b, len);
        sa(a, len);
    }
    // else if (a[0] == l)
    // {
    //     sa(a, len);
    //     ra(a, len);
    //     sa(a, len);
    //     rra(a, len);
    //     if (is_sorted(a, len))
    //         return;
    //     else
    //         sa(a, len);
    // }
    // else
    // {
    //     ra(a, len);
    //     sa(a, len);
    //     rra(a, len);
    //     if (is_sorted(a, len))
    //         return;
    //     else
    //         sa(a, len);
    // }
}
void    solve5(int *a, int *b, int len)
{
    int l = len;
    while (l != 3)
    {
        pb(a, b, len);
        l--;
    }
    if (!is_sorted(a, len))
        solve_only_3(a, l);

    if (!is_sorted(b, len))
        sb(b, len);
    if (b[0] < a[0])
        pa(a, b, len);
    else if (b[0] < a[1])
    {
        pa(a, b, len);
        sa(a, len);
    }
    else if (b[0] < a[2])
    {
        rra(a, len);
        pa(a, b, len);
        ra(a, len);
        ra(a, len);
    }
    else
    {
        pa(a, b, len);
        ra(a, len);
    }

    if (len == 5)
    {
        if (b[0] > a[3])
        {
            pa(a, b, len);
            ra(a, len);
        }
        else if (b[0] < a[1])
        {
            ra(a, len);
            pa(a, b, len);
            sa(a, len);
            rra(a, len);
        }
        else if (b[0] > a[2])
        {
            rra(a, len);
            pa(a, b, len);
            ra(a, len);
            ra(a, len);
        }
    }
}
