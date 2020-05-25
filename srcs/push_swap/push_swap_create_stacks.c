#include "../../includes/push_swap.h"

char    **validation(char **arr)
{
    int i = 0;
    int j = 0;

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

    char **arr = (ft_strsplit(argv1, ' '));

    if (!validation(arr))
    {
        return NULL;
    }

    int i = 0;
    int len = 0;
    while (arr[i] != '\0')
    {
        len++;
        i++;
    }

    int *stack;
    stack = (int *)malloc((len) * sizeof(int));

    i = 0;
    int j = 0;
    while (arr[i] != '\0')
    {
        if (ft_atol(arr[i]) > 2147483647 || ft_atol(arr[i]) < -2147483648)
            return NULL;
        else
        {
            stack[j] = (ft_atoi(arr[i]));
            i++;
            j++;
        }
    }

    return stack;
}
int     *create_stack_b(int len)
{
    int *stack;
    stack = (int *)malloc((len + 11) * sizeof(int));

    int i = 0;
    while (i < len + 11)
    {
        stack[i] = -999;
        i++;
    }
    return stack;
}
