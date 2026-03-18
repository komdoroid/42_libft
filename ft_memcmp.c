#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "12345";
	char	s2[] = "12345";
	int	res;

	res = ft_memcmp(s1, s2, 7);
	printf("res: %d\n", res);
}
