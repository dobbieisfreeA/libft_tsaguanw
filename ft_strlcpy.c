/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:52:45 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:50:17 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;

	len_src = 0;
	i = 0;
	while (*(src + len_src) != '\0')
		len_src++;
	if (dstsize == 0)
		return (len_src);
	while ((i < dstsize - 1) && (*(src + i) != '\0'))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (len_src);
}
// int main()
// { 
// 	char *src = "dobfdsafdfdfdfdsfdsfsdb";
// 	char dst[13];
// 	printf("%zu", ft_strlcpy(dst, src, sizeof(char) * 13));
// }