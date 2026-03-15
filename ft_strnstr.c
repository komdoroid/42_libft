// #include "libft.h"

char *strnstr(char *big, char *little, int len)
{
	int	i;

	i = 0;
	if (!*little)
		return (big);
	if (ft_strlen(little) > len)
		return (NULL);
	while (i < len)
	{
		if (big[i] != '\0' && little[i] != '\0')
			while (big[i] == little[i])

	}
