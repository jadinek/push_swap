#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size);
	return ((void*)s);
}
