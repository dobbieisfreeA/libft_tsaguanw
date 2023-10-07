/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:08:31 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/23 20:27:34 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen((const char *)s1) \
	+ ft_strlen((const char *)s2) + 1));
	if (str == NULL)
		return (0);
	while (*(s1 + j) != '\0')
	{
		*(str + i) = *(s1 + j);
		i++;
		j++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(str + i) = *(s2 + j);
		i++;
		j++;
	}
	*(str + i) = '\0';
	return (str);
}
// #include <stdio.h>
// int main()
// {
//         printf("%s\n", ft_strjoin("dobbie", "isfree"));
// 		printf("%s\n", ft_strjoin("tripouille", "42"));
// 		printf("%s\n", ft_strjoin("42", ""));
// }
