#include <stddef.h>

char	*ft_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return (NULL);
}

#include <unistd.h>

int	main(void)
{
	char	*str = "Im saiyan";
	char	*res;

	res = ft_strchr(str, 'a');
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
	write(1, "\n", 1);
}
