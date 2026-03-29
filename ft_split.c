#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			count++;
		}
		i++;
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

	words = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * words);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c)
				j++;
			ptr[count] = (char *)malloc(sizeof(char) * (j + 1));
			if (ptr[count] == NULL)
				return (NULL);
			ft_memcpy(ptr[count], s[i], j);
			i += j;
			count++;
		}
		i++;
	}
	return (ptr);
}
