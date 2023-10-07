/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:20:35 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 10:38:55 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (*(s + i) != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			j;
	size_t			len_s;

	i = 0;
	j = 0;
	len_s = ft_strlen((const char *)s);
	if (s == NULL)
		return (0);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	if (len > len_s - (size_t)start)
		len = len_s - (size_t)start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0' && i < len)
	{
		*(str + i) = *(s + start + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	// printf("%s\n", ft_substr("Dobbieisfree", 2, 5));
// 	// printf("%s\n", ft_substr("tripouille", 0, 42000));
// 	// printf("%s\n", ft_substr("BONJOUR LES HARICOTS !", 8, 14));
// 	//printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 400, 20));
// 	printf("%s\n", ft_substr("tripouille", 100, 1));
// 	printf("%s\n", ft_substr("0123456789", 9, 2));
// }
