/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:33:52 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 10:17:29 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
	{
		while (i < n)
		{
			*((char *)dst + i) = *((const char *)src + i);
			i++;
		}
		return (dst);
	}
	else
	{
		while (n != 0)
		{
			n--;
			*((char *)dst + n) = *((const char *)src + n);
		}
		return (dst);
	}
}

// #include <stdio.h>

// int main ()
// {
// 	 char dst[11];
// 	 char *src = "qwerty1234";
// 	 ft_memmove(dst, src, sizeof(char)*10);
// 	 dst[10] = '\0';
// 	 printf("%s", dst);
// }