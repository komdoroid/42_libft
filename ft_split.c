/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:40:50 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/26 14:46:47 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
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
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	start;

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
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			res[j] = make_word(s, start, c);
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

// int	main(void)
// {
// 	char	s[] = "as;ldhflkask;jio ;a;lskaaa";
// 	char	c;
// 	char	**res;
// 	int		i;
// 	int		j;
// 
// 	c = 'a';
// 	res = ft_split(s, c);
// 	i = 0;
// 	while (res[i] != NULL)
// 	{
// 		j = 0;
// 		while (res[i][j] != '\0')
// 		{
// 			write(1, &res[i][j], 1);
// 			j++;
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }
