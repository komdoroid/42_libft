#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*dup;
	int	i;

	dup = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// # include <stdio.h>
// 
// int	main(void)
// {
// 	char	*str = "Im feeling good";
// 	char	*res;
// 
// 	res = ft_strdup(str);
// 	printf("res: %s", res);
// }
