/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:23:49 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/04 17:54:01 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	nstr = (char *)malloc(ft_strlen(s) + 1);
	if (!nstr)
		return (NULL);
	while (s[i])
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

// #include <stdio.h>

// char altera(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 		return (c - 32);  // maiúscula
// 	else
// 		return (c);
// }

// int main(void)
// {
// 	char *resultado = ft_strmapi("banana", altera);
// 	if (resultado)
// 	{
// 		printf("Resultado: %s\n", resultado);  
// 		free(resultado); // não esquecer!
// 	}
// 	return 0;
// }
