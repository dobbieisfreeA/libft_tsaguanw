/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:31:17 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/15 22:54:37 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include <ctype.h>
// #include <xlocale.h>
// #include <stdio.h>

// int main()
// {
// 	printf("%d ", tolower('a'));
// 	printf("%d\n", ft_tolower('a'));
// 	printf("%d ", tolower('Z'));
// 	printf("%d\n", ft_tolower('Z'));
// 	printf("%d ", tolower('!'));
// 	printf("%d\n", ft_tolower('!'));
// 	printf("%d ", tolower(47));
// 	printf("%d\n", ft_tolower(47));
// }
