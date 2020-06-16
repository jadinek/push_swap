#include "../../includes/push_swap.h"

char    **validation(char **arr)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (arr[i] != '\0')
    {
        while (arr[i][j] != '\0')
        {
            if ((!ft_isdigit(arr[i][j])) && arr[i][j] != '-')
            {
                return NULL;
            }
            j++;
        }
        j = 0;
        i++;
    }

    return arr;
}
int     *create_stack_a(char *argv1)
{
    int i;
    int len;

    i = 0;
    len = 0;
    char **arr = (ft_strsplit(argv1, ' '));
    while (arr[i] != '\0')
    {
        len++;
        i++;
    }
    if (!validation(arr)){
        free_array(arr, len);
        return NULL;
    }
    int *stack = (int *)malloc((len) * sizeof(int));
    if (set_stack_a(stack, arr)){
        free_array(arr, len);
        return stack;
    }
    else{
        free_array(arr, len);
        free(stack);
        return NULL;
    }
}
int     *set_stack_a(int *stack_a, char **arr){
    int i;
    int j;

    i = 0;
    j = 0;
    while (arr[i] != '\0')
    {
        if (ft_atol(arr[i]) > 2147483647 || ft_atol(arr[i]) < -2147483648)
            return NULL;
        else
        {
            stack_a[j] = (ft_atoi(arr[i]));
            i++;
            j++;
        }
    }
    if (i == 0) {
        return NULL;
    }
    return stack_a;
}
int     *create_stack_b(int len)
{
    int *stack;
    int i;

    i = 0;
    stack = (int *)malloc((len + 11) * sizeof(int));
    while (i < len + 11)
    {
        stack[i] = -999;
        i++;
    }
    return stack;
}
void    check_for_sentinels(int *a, int len){
    int i;

    i = 0;
    while (i < len){
        if (a[i] == -999 || a[i] == 999){
            ft_putstr("\033[01;33mThis program does not accept the integer: ");
            ft_putstr("\033[1;31m");
            ft_putnbr(a[i]);
            ft_putstr("\033[01;33m\nPlease try again.\n");
            free(a);
            exit(0);
        }
        i++;
    }
}