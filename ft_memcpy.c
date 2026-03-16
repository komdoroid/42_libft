#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest1[] = "bbbbb";
	char	dest2[] = "bbbbb";
	char	src[] = "aaaaa";

	memcpy(dest1, src, 3);
	ft_memcpy(dest2, src, 3);
	printf("dest1: %s\n", dest1);
	printf("dest2: %s\n", dest2);
}
