/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:18:32 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 10:35:30 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	//  char *s1 = "";
// 	//  char *s2 = "";
// 	 char *s1 = "atoms\0\0\0\0";
//  	 char *s2 = "atoms\0abc";
// 	 printf("%d ", strncmp(s1, s2, 6));
// 	 printf("%d", ft_strncmp(s1, s2, 6));
// 	//  printf("%d\n", strncmp("testa", "testc", 6));
// 	//  printf("%d", ft_strncmp("testa", "testc", 6));
// }