#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/includes/libft.h"

char    **validation(char** arr);
int     *create_stack_a(char* argv1);
int     *create_stack_b(int len);
int     get_len(char* argv1);
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
void    clean_arr(int *arr, int n);
int     get_len(char *argv1);
int     check_duplicate(int *a, int len);
int     is_sorted(int *arr, int n);
int     is_empty(int *b, int len);
int     *set_stack_a(int *stack_a, char **arr);

#endif