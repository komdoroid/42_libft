#include <stddef.h>

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			last = i;
		i++;
	}
	if (str[i] == c)
		last = i;
	if (last == -1)
		return (NULL);
	return (str + last);
}

#include <unistd.h>

int	main(void)
{
	char	*str = "Im saiyan";
	char	*res;

	res = ft_strrchr(str, 'a');
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
	write(1, "\n", 1);
}
