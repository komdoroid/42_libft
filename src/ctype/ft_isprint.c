int	ft_isprint(int c)
{
	if (c <= 31 || 127 <= c)
		return (c);
	return (0);
}


#include <stdio.h>

int	main(void)
{
	char	c = 'a';

	printf("res: %d\n", ft_isprint(c));
}
