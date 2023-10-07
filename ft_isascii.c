/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:37:34 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/18 20:43:05 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h> 

// int main () 
// { 
//     printf("%d\n", ft_isdigit('D'));
//     printf("%d\n", ft_isdigit(' '));
//     printf("%d\n", ft_isdigit('*'));
//     printf("%d\n", ft_isdigit('\n'));
// }