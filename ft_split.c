#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	words;
	size_t	count;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			ptr[count] = (char *)malloc(sizeof(char) * (j + 1));
			if (ptr[count] == NULL)
				return (NULL);
			ft_memcpy(ptr[count], &s[i], j);
			ptr[count][j] = '\0';
			i += j;
			count++;
		}
		i++;
	}
	ptr[words] = NULL;
	return (ptr);
}

int	main(void)
{
	char	s[] = "as;ldhflkask;jio ;a;lskjio";
	char	c = 'a';
	char	**res;
	int	i;
	int	j;

	res = ft_split(s, c);
	i = 0;
	while (res[i] != NULL)
	{
		j = 0;
		while (res[i][j] != '\0')
		{
			write(1, &res[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

