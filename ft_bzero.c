#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return;
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	str[] = "Im feeling good...";
// 	int	i = 0;
// 
// 	ft_bzero(str, 5);
// 	while (i < 13)
// 	{
// 		printf("result : %c\n", str[i]);
// 		i++;
// 	}
// }
