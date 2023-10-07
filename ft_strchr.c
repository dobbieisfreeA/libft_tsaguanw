/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:34:15 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 11:03:25 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *test_1 = "Hello World !!! @dobbieisfree";
// 	char *test_2 = "teste";
// 	//char *test_3 = "Hello World !!! dobbieisfree";
// 	char *t = "tripouille";

// 	printf("1 %s ", strchr(test_1, '@'));
// 	printf("1 %s\n", ft_strchr(test_1, '@'));

// 	printf("2 %s       ", strchr(test_2, '\0'));
// 	printf("2 %s\n", ft_strchr(test_2, '\0'));

// 	printf("3 %s ", strchr(t, 't' + 256));
// 	printf("3 %s\n", ft_strchr(t, 't' + 256));
// }