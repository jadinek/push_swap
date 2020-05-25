#include "libft.h"

long	ft_atol(const char *s)
{
	long	p;
	int		sign;

	sign = 1;
	p = 0;
	while (*s == '\t' || *s == ' ' || *s == '\n' || *s == '\f' || *s == '\r' ||
	*s == '\v')
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		p = p * 10 + *s - '0';
		s++;
	}
	return (p * sign);
}