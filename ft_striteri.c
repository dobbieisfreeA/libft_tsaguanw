/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:39:32 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 09:46:21 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void iter(unsigned int i, char * s) 
// {
// 	*s = 'A' + i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		f(i, s + i);
		i++;
	}
}
// #include <stdio.h>
// int main()
// { 
// 	char str[] = "0000000000"; 
//     ft_striteri(str, iter);
//     printf("%s\n", str); 
// }