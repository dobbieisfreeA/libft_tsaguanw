/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:54:10 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 09:57:45 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

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

// int	ft_tolower(int c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// }

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

// char	*ft_case(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return ft_toupper(c);
//     else
//         return ft_tolower(c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(str + i) = f(i,*(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

// int main()
// {
// 	char *str = "Hello-World";
// 	printf("%s", ft_strmapi(str, ft_case));
// }
