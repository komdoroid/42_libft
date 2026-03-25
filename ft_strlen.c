#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	*str = "Im Blue Giant";
// 
// 	printf("res: %d\n", ft_strlen(str));
// }
