/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:10:21 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:49:28 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s1_tmp;
	const char	*s2_tmp;

	i = 0;
	s1_tmp = s1;
	s2_tmp = s2;
	while (i < n)
	{
		if (*(s1_tmp + i) != *(s2_tmp + i))
			return (*(unsigned char *)(s1_tmp + i) \
			- *(unsigned char *)(s2_tmp + i));
		i++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {

// 	printf("%d", ft_memcmp("t\200", "t\0", 2));
// // 	char *s1 = "dobbieisfree";
// // 	char *s2 = "dobbieisfree";
// // 	printf("%d ", memcmp(s1, s2, 12));
// // 	printf("%d", ft_memcmp(s1, s2, 12));
// }