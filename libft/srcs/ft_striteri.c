#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;
	int j;

	i = 0;
	if (s == NULL || *f == NULL)
		return ;
	j = ft_strlen(s);
	while (i < j)
	{
		(*f)(i, s + i);
		i++;
	}
}
