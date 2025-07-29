/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:51:51 by bchagas-          #+#    #+#             */
/*   Updated: 2025/07/28 20:17:28 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
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
