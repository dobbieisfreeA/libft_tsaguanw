/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:13:09 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 12:12:10 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_sizeofint(long tmp)
{
	int	i;

	i = 0;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		i++;
	}
	if (tmp == 0)
		i = 1;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		i++;
	}
	return (i);
}

// char	*ft_getspace(long n)
// {
// 	char	*str;

// 	str = malloc((ft_sizeofint((long)n) + 1) * sizeof(char));
// 	if (str == NULL)
// 		return (NULL);
// 	return (str);
// }

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	tmp;

	i = 0;
	tmp = n;
	str = malloc((ft_sizeofint((long)n) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		tmp = tmp * -1;
		*(str + i++) = '-';
	}
	if (n == 0)
		*(str + i) = '0';
	i = ft_sizeofint(n);
	*(str + i) = '\0';
	i = i - 1;
	while (i >= 0 && tmp > 0)
	{
		*(str + i--) = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	return (str);
}
// int main()
// { 

// 	printf("%s\n", ft_itoa(-1234));
// 	// printf("%s\n", ft_itoa(0));
// 	// printf("%s\n", ft_itoa(1));
// 	// printf("%s", ft_itoa(42));
// }