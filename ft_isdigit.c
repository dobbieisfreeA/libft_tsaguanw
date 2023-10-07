/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:10:48 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/15 22:50:28 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h> 

// int main () 
// { 
//     printf("%d\n", ft_isdigit('D'));
//     printf("%d\n", ft_isdigit(' '));
//     printf("%d\n", ft_isdigit('0'));
//     printf("%d\n", ft_isdigit('2'));
// }