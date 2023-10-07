/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:15:27 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 12:25:34 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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

int	ft_chrcmp(char *set_str, char c)
{
	int	i;

	i = 0;
	while (*(set_str + i))
	{
		if (*(set_str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		i_str;

	i = 0;
	j = 0;
	i_str = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*(s1 + i) != '\0' && ft_chrcmp((char *)set, *(s1 + i)))
		i++;
	j = (int)ft_strlen(s1);
	while (j > i && ft_chrcmp((char *)set, *(s1 + j - 1)))
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	while (i < j)
		*(str + i_str++) = *(s1 + i++);
	*(str + i_str) = '\0';
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	//printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
// 	printf("%s\n", ft_strtrim("", ""));
// 	// printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
// 	// printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
// }