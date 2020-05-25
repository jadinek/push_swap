#include <stdlib.h>
#include "libft.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *tmp;

	elem = *begin_list;
	while (elem != NULL)
	{
		if (elem->next != NULL)
			tmp = elem->next;
		else
			tmp = NULL;
		free(elem);
		elem = tmp;
	}
	*begin_list = NULL;
}
