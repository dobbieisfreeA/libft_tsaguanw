/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:22:01 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 10:17:08 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_tmp;
	const char	*src_tmp;

	i = 0;
	dst_tmp = dst;
	src_tmp = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*(dst_tmp + i) = *(src_tmp + i);
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int main ()
// {
// 	//  char dst[5];
// 	//  char *src = "qwerty1234";
// 	//  ft_memcpy(dst, src, sizeof(char) * 10);
// 	//  printf("%s", dst);
// 	 printf("%s", ft_memcpy(((void *)0), ((void *)0), 3))
// }
