/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:22:34 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 15:13:41 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (fd < 0)
		return ;
	i = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((i % 10) + '0', fd);
}
// #include <unistd.h>
// int main(void)
// {
// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);

// 	return 0;
// }
