/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:41:40 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/25 14:28:12 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_head(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	setlen;
	size_t	head;
	size_t	i;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	head = 0;
	while (head < s1len)
	{
		i = 0;
		while (i < setlen)
		{
			if (s1[head] == set[i])
				break;
			i++;
		}
		if (i == setlen)
			break;
		head++;
	}
	return (head);
}

static int	get_tail(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	setlen;
	size_t	tail;
	size_t	i;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	tail = s1len;
	while (tail >= 0)
	{
		i = 0;
		while (i < setlen)
		{
			if (s1[tail] == set[i])
				break;
			i++;
		}
		if (i == setlen)
			break;
		tail--;
	}
	return (tail);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	head;
	int	tail;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	head = get_head(s1, set);
	tail = get_tail(s1, set);
	if (tail < 0 || head > (size_t)tail)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * ((tail - head  + 1) + 1));
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

int	main(void)
{
	char	s1[] = "marumarumorimori";
	char	set[] = "mari";
	char	*res;

	res = ft_strtrim(s1, set);
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
}
