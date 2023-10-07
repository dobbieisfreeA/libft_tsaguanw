/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:40:12 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 21:27:47 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h> 

// int main () 
// { 
//     printf("%d\n", ft_isprint('D'));
//     printf("%d\n", ft_isprint(' '));
//     printf("%d\n", ft_isprint('7'));
//     printf("%d\n", ft_isprint('\n'));
// }