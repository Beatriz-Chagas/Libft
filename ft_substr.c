/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:29:55 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/04 21:35:17 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	i -= start;
	if (len < i)
		i = len;
	sub = ft_calloc(i + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, i);
	return (sub);
}

#include <stdio.h>

int main(void)
{
	char *str = "banana";
	char *sub1 = ft_substr(str, 2, 3);  // espera: "nan"
	char *sub2 = ft_substr(str, 10, 5); // espera: ""
	char *sub3 = ft_substr(str, 1, 10); // espera: "anana"

	printf("sub1: %s\n", sub1);
	printf("sub2: %s\n", sub2);
	printf("sub3: %s\n", sub3);

	free(sub1);
	free(sub2);
	free(sub3);

	return 0;
}
