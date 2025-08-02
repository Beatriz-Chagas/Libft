/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 02:52:16 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 03:18:28 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int	len;
	char	*dest;

	if (!src )
		return (NULL);
	len = ft_strlen(src);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, len + 1);
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
// 	const char *original = "libc é quem te copia!";
// 	char *copia = ft_strdup(original);

// 	if (copia)
// 		printf("Cópia: %s\n", copia);
// 	else
// 		printf("Erro ao duplicar string.\n");

// 	free(copia);  // não esquecer!
// 	return 0;
// }
