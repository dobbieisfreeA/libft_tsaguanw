/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaguanw <tsaguanw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:16:39 by tsaguanw          #+#    #+#             */
/*   Updated: 2023/10/07 10:39:28 by tsaguanw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	to_store;
	size_t	i;

	if (count != 0 && size != 0 && count > (4294967295 / size))
		return (NULL);
	i = 0;
	to_store = count * size;
	ptr = malloc(to_store);
	if (ptr == NULL)
		return (NULL);
	while (i < to_store)
	{
		*((char *)(ptr + i)) = 0;
		i++;
	}
	return ((void *)(ptr));
}

// int main()
// {
// 	void *ptr;
// 	ptr = ft_calloc(3, sizeof(int));
// 	//printf("%d", ft_calloc((SIZE_MAX, SIZE_MAX) == NULL));
// 	//printf("memory address : %p\n", ptr);
// 	//printf("size of memories allocation : %lu", sizeof(ptr));
// }