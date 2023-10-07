/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:37:17 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/27 15:18:36 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		write(fd, s + i, 1);
		i++;
	}
	write(fd, "\n", 1);
}
// int main()
// { 
//     //ft_putendl_fd("Hello", 1);
// 	ft_putendl_fd("lorem ipsum dolor sit amet", 2);
// }