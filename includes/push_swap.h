#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

char    **validation(char** arr);
int     *create_stack_a(char* argv1);
int     *create_stack_b(int len);
void    sa(int *a, int len);
void    sb(int *b, int len);
void    ss(int *a, int *b, int len);
void    pa(int *a, int *b, int len);
void    pb(int *a, int *b, int len);
void    ra(int *a, int len);
void    rb(int *b, int len);
void    rr(int *a, int *b, int len);
void    rra(int *a, int len);
void    rrb(int *b, int len);
void    rrr(int *a, int *b, int len);
int     get_len(char* argv1);
int     check_duplicate(int *a, int len);
int     is_sorted(int *arr, int n);
int     is_empty(int *b, int len);
void    clean_arr(int *arr, int n);
void    sort(int *a, int *b, int *c, int len);
void    solve_only_3(int *a, int len);
void    solve3(int *a, int*b, int len);
void    solve5(int *a, int *b, int *c, int len);
void    after_split(int *a, int *b, int *c, int len);
void    remove_placeholder(int *arr, int n);
void    add_placeholder(int *arr, int n);
int     get_median(int *a, int n);
int     smallest(int *a, int len);
int     largest(int *a, int len);
int     *set_stack_a(int *stack_a, char **arr);
void    solve4(int *a, int *b, int len);
void    reverse_swap_rotate(int *a, int len);

#endif