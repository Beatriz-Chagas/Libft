/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:22:34 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/09 00:03:54 by bchagas-         ###   ########.fr       */
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
