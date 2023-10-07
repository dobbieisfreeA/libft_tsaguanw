/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:52:09 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/15 22:54:46 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <ctype.h>
// #include <xlocale.h>
// #include <stdio.h>

// int main()
// {
// 	printf("%d ", toupper('a'));
// 	printf("%d\n", ft_toupper('a'));
// 	printf("%d ", toupper('Z'));
// 	printf("%d\n", ft_toupper('Z'));
// 	printf("%d ", toupper('!'));
// 	printf("%d\n", ft_toupper('!'));
// 	printf("%d ", toupper(47));
// 	printf("%d\n", ft_toupper(47));
// }