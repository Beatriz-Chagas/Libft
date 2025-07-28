/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 03:01:59 by bchagas-          #+#    #+#             */
/*   Updated: 2025/07/28 17:01:32 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;

	i = (unsigned char *)b;
	while (len--)
		i[len] = (unsigned char)c;
	return (b);
}
// #include <stdio.h>
// int main(void)
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore memset(): %s\n", str);

//     // Fill 8 characters starting from str[13] with '.'
//     ft_memset(str + 13, '.', 8 * sizeof(char));

//     printf("After memset():  %s\n", str);
//     return 0;
// }
