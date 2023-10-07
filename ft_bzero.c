/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:39:31 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:48:17 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		*(tmp + i) = 0;
		i++;
	}
}
// #include <stdio.h>

// int main ()
// {
// 	char buffer[10];
// 	ft_bzero(buffer, sizeof(char) * 10);

// 	for (int i = 0; i < 10; i++) {
//         printf("%c", buffer[i]);
//     }

// }
