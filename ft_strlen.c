/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:51:51 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 01:02:15 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include<stdio.h>
// int	main()
// {
// 	char	str[] = "Adoleta";

// 	printf("A String %s possui ", str);
// 	printf("%d caracteres.", ft_strlen(str));
// 	return (0);
// }
