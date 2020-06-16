#include "../../includes/checker.h"

void free_stacks(int *a, int *b){
    free(a);
    free(b);
}

int     main(int argc, char *argv[])
{
    char *l;
    int *a;
    int len;
    int *b;
    int loop;

    if (argc == 1){
        get_next_line(0, &l);
        return 0;
    }
    a = create_stack_a(argv[1]);
    if (!a) {
        ft_putstr("\033[1;31mError\n");
        return 0;
    }
    len = get_len(argv[1]);
    if (check_duplicate(a, len)) {
        free(a);
        ft_putstr("\033[1;31mError\n");
        return 0;
    }
    check_for_sentinels(a, len);
    b = create_stack_b(len);
    while (get_next_line(0, &l) > 0) {
        if (!ft_strcmp(l, "sa"))
            sa(a, len);
        else if (!ft_strcmp(l, "sb"))
            sb(b, len);
        else if (!ft_strcmp(l, "ss"))
            ss(a, b, len);
        else if (!ft_strcmp(l, "pa"))
            pa(a, b, len);
        else if (!ft_strcmp(l, "pb"))
            pb(a, b, len);
        else if (!ft_strcmp(l, "ra"))
            ra(a, len);
        else if (!ft_strcmp(l, "rr"))
            rr(a, b, len);
        else if (!ft_strcmp(l, "rb"))
            rb(b, len);
        else if (!ft_strcmp(l, "rra"))
            rra(a, len);
        else if (!ft_strcmp(l, "rrb"))
            rrb(b, len);
        else if (!ft_strcmp(l, "rrr"))
            rrr(a, b, len);
        else if (!ft_strcmp(l, "-v")) {
            loop = 0;
            while(loop < len){
                ft_putstr("\033[0;34m");
                ft_putnbr(a[loop]);
                ft_putchar(' ');
                loop++;
            }
            ft_putstr("\033[0m\n");
        }
        else {
            free(l);
            free_stacks(a, b);
            ft_putstr("\033[1;31mError");
            return 0;
        }
        free(l);
    }
    if (is_sorted(a, len) && is_empty(b, len))
        ft_putstr("\033[1;32mOK\n");
    else
        ft_putstr("\033[1;31mKO\n");

    free_stacks(a, b);
};