#include "libft.h"

t_list2		*ft_create_elem(void *data)
{
	t_list2	*elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}
