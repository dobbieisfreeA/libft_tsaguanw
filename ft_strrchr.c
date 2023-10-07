/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:09:02 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/03 20:17:13 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	if (*(s + len) == c)
		return ((char *)(s + len));
	while (len >= 0)
	{
		if (*(s + len) == (char)c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char *test_1 = "Hello World !!! @dobbieisfree";
// 	char *test_2 = "bonjour";
// 	char *test_3 = "Hez@llo World !!! dobbieisfree";
// 	printf("\n1 %s ", strrchr(test_1, '@'));
// 	printf("1 %s\n", ft_strrchr(test_1, '@'));
// 	printf("2 %s ", strrchr(test_2, 'b'));
// 	printf("2 %s\n", ft_strrchr(test_2, 'b'));
// 	printf("3 %s\n", strrchr(test_3, '@'));
// 	printf("3 %s\n", ft_strrchr(test_3, '@'));
// }