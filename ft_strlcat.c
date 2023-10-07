/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:49:41 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:49:50 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	i = 0;
	while (*(src + len_src) != '\0')
		len_src++;
	while (*(dst + len_dst) != '\0' && len_dst <= dstsize)
		len_dst++;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (i < dstsize - len_dst - 1 && *(src + i) != '\0')
	{
		*(dst + len_dst + i) = *(src + i);
		i++;
	}
	*(dst + len_dst + i) = '\0';
	return (len_src + len_dst);
}
// #include <stdio.h>
// // #include "libft.h"

// int main()
// {
//     // char dst_1[12] = "qwerty";
//     // char dst_2[12] = "qwerty";
//     // char *src = "1234567890";
// 	char *dest = "rrrrrrrrrrrrrrr";

// 	printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	printf("%s", dest);
//     // printf("%zu\n", ft_strlcat(dst_1, src, 3));
// 	// printf("%zu\n", strlcat(dst_2, src, 3));
//     // printf("%s\n", dst_1);
//     // printf("%s", dst_2);

// }