/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:22:32 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 01:03:21 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (!destsize)
		return (src_len);
	while (i < destsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
// #include <stdio.h>
// size_t ft_strlcpy(char *dest, const char *src, size_t destsize);

// int main() {
// 	char orin[10] = "Hello!!!";
// 	char dest[10];
// 	size_t res = ft_strlcpy(dest, orin, 10);

// 	printf("Destino copiado: %s\n", dest);
// 	printf("Comprimento de src: %zu\n", res);
// 	return 0;
// }
