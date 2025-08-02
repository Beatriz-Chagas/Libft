/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 01:23:42 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 01:56:56 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (destsize <= dest_len)
		return (src_len + destsize);
	while (src[i] && dest_len + i < destsize - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// #include <stdio.h>
// int	main()
// {
// 	char str1[50] = "A dona aranha ";
// 	char str2[] = "subiu pela parede";
// 	size_t res;

// 	// 50 é maior que o necessário, então vai concatenar tudo
// 	res = ft_strlcat(str1, str2, 50);

// 	printf("Resultado concatenado: \"%s\"\n", str1);
// 	printf("Valor retornado: %zu\n", res);

// 	return 0;
// }
