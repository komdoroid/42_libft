/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:41:40 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/25 17:30:22 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_in_set(char const c, char const *set)
{
	size_t	i;
	size_t	setlen;

	i = 0;
	setlen = ft_strlen(set);
	while (i < setlen)
	{
		if (c == set[i])
			return (true);
		i++;
	}
	return (false);
}

static size_t	get_head(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	head;

	s1len = ft_strlen(s1);
	head = 0;
	while (head < s1len)
	{
		if (!is_in_set(s1[head], set))
			return (head);
		head++;
	}
	return (head);
}

static size_t	get_tail(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	tail;

	s1len = ft_strlen(s1);
	tail = s1len;
	if (tail == 0)
		return (tail);
	tail--;
	while (tail != 0)
	{
		if (!is_in_set(s1[tail], set))
			return (tail);
		tail--;
	}
	if (!is_in_set(s1[tail], set))
		return (0);
	return ((size_t)-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	head;
	size_t	tail;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	head = get_head(s1, set);
	tail = get_tail(s1, set);
	if (tail == (size_t)-1 || head > tail)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * ((tail - head + 1) + 1));
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (i <= tail - head)
	{
		trim[i] = s1[i + head];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

// int	main(void)
// {
// 	char	s1[] = "marumarumorimori";
// 	char	set[] = "mari";
// 	char	*res;
// 
// 	res = ft_strtrim(s1, set);
// 	if (res == NULL)
// 		return (1);
// 	while (*res != '\0')
// 	{
// 		write(1, res, 1);
// 		res++;
// 	}
// }
