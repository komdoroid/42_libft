#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int num)
{
	long	nb;
	long	nb_cpy;
	int	len;
	int	min;

	len = 0;
	min = 0
	nb = (long)num;
	if (num == 0)
		return ("0");
	if (nb < 0)
		min = 1;
	nb_cpy = nb;
	while (nb_cpy != 0)
	{
		nb_cpy = nb_cpy / 10;
		len++;
	}
	p = (char *)malloc(sizeof(char) * (len + 1));
	while (nb != 0)
	{
		p[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
}


int	main(void)
{
	int	num = 123456;
	char	*res;

	res = ft_itoa(num);
	printf("res: %s\n", res);
}
