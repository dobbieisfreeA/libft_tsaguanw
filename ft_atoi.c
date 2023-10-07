/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:06:07 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:57:45 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	store;
	int		i;
	int		sign;

	store = 0;
	i = 0;
	sign = 1;
	while ((*(str + i) >= 9 && *(str + i) <= 13) || *(str + i) == 32)
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = sign * -1;
		i++;
	}
	while ((*(str + i) >= '0' && *(str + i) <= '9'))
	{
		store = (store * 10) + (*(str + i) - '0');
		i++;
	}
	return (sign * store);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", atoi("\n1234"));
// 	printf("%d\n", atoi("\v1234"));
// 	printf("%d\n", atoi("	1234"));
// 	printf("%d\n", atoi("\t1234"));
// 	printf("%d\n", atoi("-1234"));
// 	printf("%d\n", atoi("-123 1234"));
// 	printf("%d\n", atoi("+1234"));
// 	printf("------------------------------");
// 	printf("%d\n", ft_atoi("\n1234"));
// 	printf("%d\n", ft_atoi("\v1234"));
// 	printf("%d\n", ft_atoi("	1234"));
// 	printf("%d\n", ft_atoi("\t1234"));
// 	printf("%d\n", ft_atoi("-1234"));
// 	printf("%d\n", ft_atoi("-123 1234"));
// 	printf("%d\n", ft_atoi("+1234"));

// }