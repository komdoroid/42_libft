/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomurat <kkomurat@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:53:44 by kkomurat          #+#    #+#             */
/*   Updated: 2026/04/23 22:15:37 by kkomurat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ('0' <= c && c <= '9')
		return (c);
	else if ('A' <= c && c <= 'Z')
		return (c);
	else if ('a' <= c && c <= 'z')
		return (c);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	c;
// 
// 	c =ft_isalnum('R');
// 	printf("ft_isalnum result: %d\n", c);
// 	c = isalnum('R');
// 	printf("isalnum result = %d\n", c);
// }
