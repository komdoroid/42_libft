/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 09:01:38 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/25 09:08:53 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last = i;
		i++;
	}
	if (str[i] == (char)c)
		last = i;
	if (last == -1)
		return (NULL);
	return ((char *)(str + last));
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
