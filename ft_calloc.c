#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size != 0 && nmemb > (size_t)-1/ size)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	size_t	nmemb = 10;
	size_t	size = 4;
	size_t	i = 0;
	void	*res;
	unsigned char	*p;

	res = ft_calloc(nmemb, size);
	p = (unsigned char *)res;
	while (i < nmemb * size)
	{
		printf("%d\n", p[i]);
		i++;
	}
}
