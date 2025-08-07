/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:23:23 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 01:58:23 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;
	size_t			i;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == byte)
			return ((char *)&ptr[i]);
		i++;
	}
	if (i == '\0')
		return ((char *)&ptr[i]);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
// 	char str[] = "Hello, world!";
// 	char *res = ft_memchr(str, 'l', strlen(str));
// 	printf("%s", res);
// 	return (0);
// }
