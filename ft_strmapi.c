#include "libft.h"

char	*ft_strmpi(char cost *s, char (*f)(unsigned int, char))
{
	char	*res;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
}
