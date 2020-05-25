#include "libft.h"

void	ft_list_push_front(t_list2 **begin_list, void *data)
{
	t_list2 *elem;

	if (*begin_list != NULL)
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
