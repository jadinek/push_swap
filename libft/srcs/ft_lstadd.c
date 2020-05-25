#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *list;

	list = *alst;
	new->next = list;
	*alst = new;
}
