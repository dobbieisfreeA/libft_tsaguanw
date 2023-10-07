/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:26:50 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/09/21 20:58:57 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	locate;
	size_t	run_haystack;

	i = 0;
	locate = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (locate < len && *(haystack + locate) != '\0')
	{
		run_haystack = locate;
		while ((*(haystack + run_haystack) == *(needle + i)) \
		&& run_haystack < len)
		{
			i++;
			run_haystack++;
			if (*(needle + i) == '\0')
				return ((char *)(haystack + locate));
		}
		run_haystack = 0;
		i = 0;
		locate++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// { 
//     char *haystack = "lorem ipsum dolor sit amet";
//     char *needle = "ipsumm";
// 	char *haystack_2 = "lorem ipsum dolor sit amet";
//     char *needle_2 = "dolor";

//     printf("%s     ", strnstr(haystack, needle,30));
//     printf("%s\n", ft_strnstr(haystack, needle, 30));

// 	printf("%s     ", strnstr(haystack_2, needle_2, 15));
//     printf("%s", ft_strnstr(haystack_2, needle_2, 15));
// }