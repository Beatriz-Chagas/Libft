/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:59:22 by bchagas-          #+#    #+#             */
/*   Updated: 2025/07/31 02:04:58 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	b;
	int	i;

	i = 0;
	b = (unsigned char)c;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *)&s[i]);
		i--;
	}
	if (b == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>

// int main() {
//   char minhaString[] = "Hello, world!";
//     printf("%s", ft_strrchr(minhaString, 'e'));
//   return 0;
// }
