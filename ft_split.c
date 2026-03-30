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

static void	free_split(char **res, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static char	*make_word(char const *s, size_t start, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[start + len] != '\0' && s[start + len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			res[j] = make_word(s, i, c);
			if (res[j] == NULL)
			{
				free_split(res, j);
				return (NULL);
			}
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	res[j] = NULL;
	return (res);
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

