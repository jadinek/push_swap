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
    int *stack;

    i = 0;
    len = 0;
    char **arr = (ft_strsplit(argv1, ' '));
    if (!validation(arr))
        return NULL;
    while (arr[i] != '\0')
    {
        len++;
        i++;
    }
    stack = (int *)malloc((len) * sizeof(int));
    if (set_stack_a(stack, arr))
        return stack;
    else
        return NULL;
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
