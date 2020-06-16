#include "../../includes/push_swap.h"

void free_stacks(int *a, int *b, int *c){
    free(a);
    free(b);
    free(c);
}

int     main(int argc, char *argv[])
{
    int *a;
    int *b;
    int *c;
    int len;

    if (argc < 2)
        return 0;
    a = create_stack_a(argv[1]);
    if (!a) {
        ft_putstr("\033[1;31mError\n");
        return 0;
    }
    c = create_stack_a(argv[1]);
    len = get_len(argv[1]);
    b = create_stack_b(len);
    if (check_duplicate(a, len)) {
        free_stacks(a, b, c);
        ft_putstr("\033[1;31mError\n");
        return 0;
    }
    check_for_sentinels(a, len);
    if (is_sorted(a, len)){
        free_stacks(a, b, c);
        return 0;
    }
    else {
        if (len == 2) {
            ra(a, len);
            free_stacks(a, b, c);
            return 0;
        }
        else if (len == 3)
            solve_only_3(a, len);
        else if (len == 4)
            solve4(a, b, len);
        else if (len == 5)
            solve5(a, b, c, len);
        else
            initial_split(a, b, c, len);
    }
    free_stacks(a, b, c);
};