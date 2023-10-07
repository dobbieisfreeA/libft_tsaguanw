/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:33:24 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/15 22:59:48 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h> 

// int main (void)
// { 
//     printf("%d\n", ft_isalnum('D'));
//     printf("%d\n", ft_isalnum(' '));
//     printf("%d\n", ft_isalnum('0'));
//     printf("%d\n", ft_isalnum('2'));
// }
