/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:22:28 by marvin            #+#    #+#             */
/*   Updated: 2025/07/27 02:22:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = b;
    while (len--)
        *p++ = (unsigned char)c;
    return b;
}
// int main(void)
// {
//     char buffer[10] = "abcdefghi";
//     ft_memset(buffer, 'X', 4);
//     printf("%s\n", buffer); // Saída esperada: XXXXefghi
//     return 0;
// }
