/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:45:25 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/15 23:16:31 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h> 

// int	main(void)
// { 
//     printf("%d\n", ft_isalpha('D'));
//     printf("%d\n", ft_isalpha(' '));
//     printf("%d\n", ft_isalpha('0'));
//     printf("%d\n", ft_isalpha('2'));
// }