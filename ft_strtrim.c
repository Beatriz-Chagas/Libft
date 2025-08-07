/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:26:06 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 02:05:23 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nstr;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	nstr = ft_substr(s1, start, end - start + 1);
	return (nstr);
}
// #include <stdio.h>

// char *ft_strtrim(const char *s1, const char *set);

// int main(void)
// {
// 	char *res1 = ft_strtrim("   banana   ", " ");
// 	char *res2 = ft_strtrim("\t\nbanana\n\t", "\t\n");
// 	char *res3 = ft_strtrim("xabcx", "x");

// 	printf("res1: '%s'\n", res1);  // "banana"
// 	printf("res2: '%s'\n", res2);  // "banana"
// 	printf("res3: '%s'\n", res3);  // "abc"

// 	free(res1);
// 	free(res2);
// 	free(res3);
// 	return 0;
// }
