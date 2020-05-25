#include "../../includes/push_swap.h"

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
        ft_putstr("Error");
        return 0;
    }
    c = create_stack_a(argv[1]);
    len = get_len(argv[1]);
    b = create_stack_b(len);
    if (check_duplicate(a, len)) {
        ft_putstr("Error");
        return 0;
    }
    if (is_sorted(a, len))
        return 0;
    else {
        if (len == 2) {
            ra(a, len);
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

    free(a);
    free(b);
    free(c);
};