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

	if ((!src && !dest) && n > 0)
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
// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dest[50];
//     char dest_std[50];
//     ft_memcpy(dest, src, strlen(src) + 1);
//     printf("Resultado com ft_memcpy:  %s\n", dest);
//     return 0;
// }
