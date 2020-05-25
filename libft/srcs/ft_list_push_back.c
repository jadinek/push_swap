#include "libft.h"

void	ft_list_push_back(t_list2 **begin_list, void *data)
{
	t_list2 *elem;

	elem = *begin_list;
	if (elem != NULL)
	{
		while (elem->next != NULL)
			elem = elem->next;
		elem->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
