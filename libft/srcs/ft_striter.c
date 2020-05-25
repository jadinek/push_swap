#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int i;
	int j;

	if (s == NULL || *f == NULL)
		return ;
	i = ft_strlen(s);
	j = 0;
	while (j < i)
	{
		(*f)(s + j);
		j++;
	}
}
