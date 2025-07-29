/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:10:41 by bchagas-          #+#    #+#             */
/*   Updated: 2025/07/28 20:10:41 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (src == NULL || dest == NULL || n == 0)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>  // Para comparar com memcpy original
// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dest[50];
//     char dest_std[50];

//     // Usando a sua função ft_memcpy
//     ft_memcpy(dest, src, strlen(src) + 1);

//     // Usando a função padrão para comparação
//     memcpy(dest_std, src, strlen(src) + 1);

//     printf("Resultado com ft_memcpy:  %s\n", dest);
//     printf("Resultado com memcpy:     %s\n", dest_std);

//     // Verifica se os dois resultados são iguais
//     if (strcmp(dest, dest_std) == 0)
//         printf("ft_memcpy funciona corretamente.\n");
//     else
//         printf("Há um erro em ft_memcpy.\n");

//     return 0;
// }
