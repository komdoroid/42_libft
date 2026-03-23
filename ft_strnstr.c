#include "libft.h"

char *ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	big[] = "Im spiderman";
	char	little[] = "spi";
	char	*res;

	res = ft_strnstr(big, little, 8);
	if (res == NULL)
	{
		write(1, "Not found\n", 10);
		return (0);
	}
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
	write(1, "\n", 1);
}
