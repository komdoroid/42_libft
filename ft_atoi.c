/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:31:14 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/25 10:50:19 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (9 <= c && c <= 13)
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	res;

	i = 0;
	m = 1;
	while (isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	res = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (m * res);
}

// #include <stdlib.h>
// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	str[] = "     +11*11";
// 
// 	printf("ft_atoi : %d\n", ft_atoi(str));
// 	printf("atoi : %d\n", atoi(str));
// }
