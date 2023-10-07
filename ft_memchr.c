/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:16:00 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:49:13 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		if (*(unsigned char *)(tmp + i) == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	// const char *str = ft_memchr("bonjourno", 'n', 2);
// 	// if (!str)
// 	// 	printf("NULL\n");
// 	// else
// 	// 	printf("%s", str);

// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 		printf("%s", (char *)ft_memchr(tab, -1, 7));

// 	// char *test_1 = "Hello World !!! @dobbieisfree";
// 	// char *test_2 = "";
// 	// char *test_3 = "Hello World !!! dobbieisfree";
// 	// char test_4[] = {0, 1, 2, 3, 4};

// // 	printf("1 %s ", memchr(test_1, '@', sizeof(char) * 30));
// // 	printf("1 %s\n", ft_memchr(test_1, '@', sizeof(char) * 30));
// // 	printf("2 %s ", memchr(test_2, '@', 0));
// // 	printf("2 %s\n", ft_memchr(test_2, '@', 0));
// // 	printf("3 %s ", memchr(test_3, '@', sizeof(char) * 30));
// // 	printf("3 %s\n", ft_memchr(test_3, '@', sizeof(char) * 30));
// // 	printf("4 %d        ", memchr(test_4, 2 + 256 , 3) == test_4 + 2);
// // 	printf("4 %d\n", ft_memchr(test_4, 2 + 256, 3) == test_4 + 2);
// }
