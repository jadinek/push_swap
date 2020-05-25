#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char*)dst;
	while (n--)
		*tmp++ = *((unsigned char*)src++);
	return (dst);
}
