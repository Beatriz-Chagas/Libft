/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:52:13 by bchagas-          #+#    #+#             */
/*   Updated: 2025/07/29 17:57:39 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char minhaString[] = "Hello, world!";
//   char *ponteiro;

//   ponteiro = strchr(minhaString, 'w');

//   if (ponteiro != NULL) {
//     printf("Caractere 'w' encontrado na posição:
// %ld\n", ponteiro - minhaString);
//   } else {
//     printf("Caractere 'w' não encontrado.\n");
//   }

//   return 0;
// }
