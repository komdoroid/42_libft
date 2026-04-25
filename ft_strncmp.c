/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 09:09:25 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/25 09:38:21 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	str1[] = "42tokyo";
// 	char	str2[] = "43tokyo";
// 	size_t	size = 4;
// 
// 	printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, size));
// 	printf("strncmp : %d\n", strncmp(str1, str2, size));
// }
