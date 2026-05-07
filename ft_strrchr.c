/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 09:01:38 by kkomurat          #+#    #+#             */
/*   Updated: 2026/05/07 21:54:09 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (s[i] == (char)c)
		last = i;
	if (last == -1)
		return (NULL);
	return ((char *)(s + last));
}

// #include <unistd.h>
//
// int	main(void)
// {
// 	char	*str = "42tokyo";
// 	char	*res;
//
// 	res = ft_strrchr(str, 'o');
// 	while (*res != '\0')
// 	{
// 		write(1, res, 1);
// 		res++;
// 	}
// 	write(1, "\n", 1);
// }
