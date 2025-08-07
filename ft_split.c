/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 02:23:30 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 04:52:49 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	word;

	word = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			word++;
		s++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**splited;
	const char	*start;
	int			i;

	if (!s)
		return (NULL);
	splited = (char **)malloc((count_word((char *)s, c) + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		if (s > start)
		splited[i++] = ft_substr(start, 0, s - start);
	}
	splited[i] = NULL;
	return (splited);
}
// #include <stdio.h>

// int main(void)
// {
// 	char **res = ft_split("banana,melancia,,uva", ',');

// 	for (int i = 0; res[i]; i++)
// 		printf("res[%d] = \"%s\"\n", i, res[i]);

// 	// não esquecer de liberar!
// 	for (int i = 0; res[i]; i++)
// 		free(res[i]);
// 	free(res);

// 	return 0;
// }
