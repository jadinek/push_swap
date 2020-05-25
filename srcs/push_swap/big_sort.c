#include "../../includes/push_swap.h"

void    sort(int *a, int *b, int *c, int len)
{
    int i = 0;
    int j = 0;
    int b_len = 0;
    int a_len = len;
    int median = get_median(c, len);
    // split
    while ((a_len >= 4))
    {
        while (i < len)
        {
            if (a[0] < median)
            {
                pb(a, b, len);
                b_len++;
                a_len--;
            }
            else if (a[0] > median || a_len >= 4)
            {
                ra(a, len);
            }
            i++;
        } // end of first split
        i = 0;
        after_split(a, b, c, len);
        //get new median
        median = get_median(c, a_len);
    }

    if (!is_sorted(a, len))
        solve3(a, b, len);

    //remove top placeholder from b
    remove_placeholder(b, len + 11);
    //push from b until placeholder

    int count = 0;
    while (b[0] != 999 && b[0] != -999)
    {
        pa(a, b, len);
        b_len--;
        count++;
        a_len++;
    }

    if (!is_sorted(a, len))
    {
        if (count == 3)
            solve3(a, b, len);
        else
            sa(a, len);
    }
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
        // make c=a
        while (i < count)
        {
            c[i] = a[i];
            i++;
        }
        median = get_median(c, count);
        i = 0;

        while (((count) >= 4))
        {
            int k = count;
            if (k % 2 != 0)
                k++;

            j = 0;
            while (i < a_len)
            {
                if (a[0] < median)
                {
                    pb(a, b, len);
                    b_len++;
                    a_len--;
                    count--;
                }
                else if (a[0] >= median && (count > k / 2))
                {
                    ra(a, len);
                    j++;
                }
                i++;
            } // end of first split

            if (b[0] != -999)
                add_placeholder(b, len + 11);

            i = 0;
            while (i < j)
            {
                rra(a, len);
                i++;
            }

            i = 0;
            while (i < count)
            {
                c[i] = a[i];
                i++;
            }
            median = get_median(c, count);
        }
        if (!is_sorted(a, len))
        {
            if (count == 2)
                sa(a, len);
            if (count == 3)
                solve3(a, b, len);
        }
    }

    j = 0;
    if (b_len)
    {
        remove_placeholder(b, len + 11);
        while (b[0] != -999)
        {
            pa(a, b, len);
            j++;
        }
    }

    if (!is_sorted(a, len))
    {
        if (count == 3 || j == 3)
            solve3(a, b, len);
        else
            sa(a, len);
    }

    // printf("-v");
}