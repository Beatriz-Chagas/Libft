/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 03:21:27 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 04:36:28 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main() {
//   const char *string = "hello world ";
//   const char *substring = "wor";
//   char *result = ft_strnstr(string, substring, 10);
//   if (result != NULL) {
//     printf("Substring encontrada em: %s\n", result);
//   } else {
//     printf("Substring não encontrada.\n");
//   }
//   return 0;
// }
