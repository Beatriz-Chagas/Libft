/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 04:40:49 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 07:00:43 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <stdio.h>
// //cc42 ft_calloc.c ft_bzero.c ft_memset.c
// int	main (void)
// {
// 	size_t n = 5;
// 	int	*array = (int *)ft_calloc(n, sizeof(int));

// 	if (!array)
// 	{
// 		printf("Erro na alocacao");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < n; i++)
// 		printf("array[%zu] = %d\n", i, array[i]);
// 	free(array);
// 	return (0);
// }
