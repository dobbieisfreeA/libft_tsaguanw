/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:43:37 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:00:52 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// int main()
// { 

// 	char buffer[10];
// 	char *str;

// 	str = ft_memset(buffer, 'A', 10);
// 	str[9] = '\0';
// 	printf("%s", str);
// }