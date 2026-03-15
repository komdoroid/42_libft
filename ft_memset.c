#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	int	i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
