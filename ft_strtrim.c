#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s1 == NULL)
		return (NULL);
	trimed = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (trimed == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
		{
			trimed[k] = s1[i];
			k++;
		}
		i++;
	}
	trimed[k] = '\0';
	return (trimed);
}

int	main(void)
{
	char	s1[] = "marumarumorimori";
	char	set[] = "aruori";
	char	*res;

	res = ft_strtrim(s1, set);
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
}
