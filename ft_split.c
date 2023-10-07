/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:53:44 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/03 19:23:51 by tsaguanw         ###   ########.fr       */
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

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*str;
// 	size_t			i;
// 	size_t			j;
// 	size_t			len_s;

// 	i = 0;
// 	j = 0;
// 	len_s = ft_strlen((const char *)s);
// 	if (s == NULL)
// 		return (0);
// 	if ((size_t)start > ft_strlen(s)) 
// 		len = 0;
// 	if (len > len_s - (size_t)start)
// 		len = len_s - (size_t)start;
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	while (*(s + i) != '\0' && i < len)
// 	{
// 		*(str + i) = *(s + start + i);
// 		i++;
// 	}
// 	*(str + i) = '\0';
// 	return (str);
// }

int	ft_wordcount(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) != '\0' && *(s + i) != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}
// '\0' for when c isnt in s

int	ft_lentillc(char *s, char c)
{
	int	i;

	i = 0;
	while (*(s + i) != c && *(s + i) != '\0')
		i++;
	return (i);
}

void	ft_freeall(char **str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		free(*(str + i));
		i++;
	}
	free (str);
}

char	**ft_subarr(char **str, char *s, char c, int word_count)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (j < word_count)
	{
		while (*(s + i) != '\0' && *(s + i) == c)
			i++;
		start = i;
		*(str + j) = ft_substr((char const *)s, start, \
		ft_lentillc(s + i, c));
		if (*(str + j) == NULL)
			return (ft_freeall(str), NULL);
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
		j++;
	}
	*(str + j) = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		word_count;

	word_count = ft_wordcount((char *)s, c);
	str = (char **)malloc((word_count + 1) * sizeof(char *));
	if (str == NULL)
		return (free(str), NULL);
	str = ft_subarr(str, (char *)s, c, word_count);
	return (str);
}
// int	main()
// { 
//     char    *input = "-Hello-World--";
//     char    **result = ft_split(input, 'c');
//     int        i = 0;
//     while ((*(result + i) != NULL))
//     {
//         printf("index %d : %s \n", i, *(result + i));
// 		free(*(result + i));
//         i++;
//     }
// 	free(result);
// 	//ft_freeall(result);
// }