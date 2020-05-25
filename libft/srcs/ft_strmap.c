#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	int		len;
	int		i;

	if (s == NULL || *f == NULL)
		return (0);
	len = ft_strlen(s);
	i = 0;
	r = (char*)malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	while (i < len)
	{
		r[i] = (*f)(s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
