#include "../../includes/push_swap.h"

void    solve_for_centre_median(int *a, int *b, int len)
{
    if(!is_sorted(a, len)){
        if(a[0] < a[2])
            sa(a, len);
        else if (a[0] > a[3])
            ra(a, len);
        else {
            reverse_swap_rotate(a, len);
        }
    }
    pa(a, b, len);
    if(!is_sorted(a, len)){
        if(a[0] < a[2])
            sa(a, len);
        else if (a[0] > a[4])
            ra(a, len);
        else {
            reverse_swap_rotate(a, len);
        }
    }
}

void    solve(int *a, int *b, int len){
    if(!is_sorted(a, len)){
        if(a[0] > a[3])
            ra(a, len);
        else if((a[0] > a[1]) && (a[0] < a[2]))
            sa(a, len);
        else {
                reverse_swap_rotate(a, len);
        }
    }
    pa(a, b, len);
    if(!is_sorted(a, len)){
        if(a[0] < a[2])
            sa(a, len);
        else if(a[0] < a[3]){
            sa(a, len);
            ra(a, len);
            sa(a, len);
            rra(a, len);
        }
        else {
                reverse_swap_rotate(a, len);
        }
    }
}

void    solve5(int *a, int *b, int *c, int len)
{
    int median;

    median = get_median(c, len);
    if(a[0] == median)
        ra(a, len);
    pb(a, b, len);
    if(a[0] == median)
        ra(a, len);
    pb(a, b, len);
    if (!is_sorted(a, len))
        solve_only_3(a, 3);
    if(a[1] == median){
        pa(a, b, len);
        solve_for_centre_median(a, b, len);
        return;
    }
    if(is_sorted(b, len))
        sb(b, len);
    pa(a, b, len);
    solve(a, b, len);
    return;
}