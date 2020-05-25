#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int j;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	j = 0;
	while (j < i)
	{
		s[j] = '\0';
		j++;
	}
}
