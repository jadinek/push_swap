#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	a = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size > (i + 1))
	{
		while (a < (size - i - 1))
		{
			dst[i + a] = src[a];
			a++;
		}
		dst[i + a] = '\0';
	}
	if (i <= size)
		return (i + j);
	else
		return (size + j);
}
