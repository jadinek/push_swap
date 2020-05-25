#include "../../includes/push_swap.h"

void    sort(int *a, int *b, int *c, int len)
{
    int i;
    int j;
    int k;
    int count;
    int median;
    int a_len = 0;
    int b_len = 0;

    i = 0;
    while(b[i] != -999){
        if(b[i] != 999)
            b_len++;
        i++;
    }
    a_len = len - b_len;
    while (b_len >= 3)
    {
        remove_placeholder(b, len + 11);
        i = 0;
        count = 0;
        while (b[0] != 999 && b[0] != -999)
        {
            pa(a, b, len);
            a_len++;
            b_len--;
            count++;
        }
        while (i < count){
            c[i] = a[i];
            i++;
        }
        median = get_median(c, count);
        i = 0;
        while (((count) >= 4))
        {
            k = count;
            if (k % 2 != 0)
                k++;
            j = 0;
            while (i < a_len)
            {
                if (a[0] < median) {
                    pb(a, b, len);
                    b_len++;
                    a_len--;
                    count--;
                }
                else if (a[0] >= median && (count > k / 2)) {
                    ra(a, len);
                    j++;
                }
                i++;
            }
            if (b[0] != -999)
                add_placeholder(b, len + 11);
            i = 0;
            while (i < j) {
                rra(a, len);
                i++;
            }
            i = 0;
            while (i < count) {
                c[i] = a[i];
                i++;
            }
            median = get_median(c, count);
        }
        if (!is_sorted(a, len)) {
            if (count == 2)
                sa(a, len);
            if (count == 3)
                solve3(a, b, len);
        }
    }
    i = 0;
    if (b_len) {
        remove_placeholder(b, len + 11);
        while (b[0] != -999) {
            pa(a, b, len);
            i++;
        }
    }
    if (!is_sorted(a, len)) {
        if (count == 3 || i == 3)
            solve3(a, b, len);
        else
            sa(a, len);
    }
    printf("-v");
}

void    initial_split(int *a, int *b, int *c, int len)
{
    int i;
    int a_len;
    int median;
    int count;
    int k;
 
    i = 0;
    a_len = len;
    median = get_median(c, len);
    k = len;
    count = 0;
    if (k%2 != 0)
        k--;
    while ((a_len >= 4)) {
        while (i < len) {
            if (a[0] < median) {
                pb(a, b, len);
                a_len--;
                count++;
            }
            else if (a[0] >= median && (count < k/2)){
                ra(a, len);
            }
            i++;
        }
        i = 0;
        k = a_len;
        if (k%2 != 0)
            k--;
        count = 0;
        after_split(a, b, c, len);
        median = get_median(c, a_len);
    }

    i = 0;
    if (!is_sorted(a, len))
        solve3(a, b, len);
    remove_placeholder(b, len + 11);
    while (b[0] != 999 && b[0] != -999) {
        pa(a, b, len);
        i++;
    }
    if (!is_sorted(a, len)){
        if (i == 3)
            solve3(a, b, len);
        else
            sa(a, len);
    }
    sort(a, b, c, len);
    return;
}