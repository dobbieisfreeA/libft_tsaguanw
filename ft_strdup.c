/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:05:58 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 13:48:28 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = 0;
	i = 0;
	while (*(s1 + len) != '\0')
		len++;
	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

// int main()
// { 
// 	printf("%s", ft_strdup("wertyuiop"));
// }
