#include "libft.h"

int		ft_atoi(const char *s)
{
	int	res;
	int	np;

	np = 1;
	res = 0;
	while (*s == '\t' || *s == '\v' || *s == '\f' ||
			*s == '\r' || *s == '\n' || *s == ' ')
		s++;
	if (*s == '-')
	{
		np = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += *s - '0';
		s++;
	}
	return (res *= np);
}
