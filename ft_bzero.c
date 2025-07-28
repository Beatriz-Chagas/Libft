/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:20:19 by marvin            #+#    #+#             */
/*   Updated: 2025/07/27 02:20:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// int main(void)
// {
//     char buffer[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};

//     printf("Antes de ft_bzero: %s\n", buffer);

//     // Zera os 5 primeiros bytes
//     ft_bzero(buffer, 5);

//     // Exibe após zerar
//     printf("Depois de ft_bzero: ");
//     for (int i = 0; i < 10; i++) {
//         if (buffer[i] == 0)
//             printf("\\0");
//         else
//             printf("%c", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }
