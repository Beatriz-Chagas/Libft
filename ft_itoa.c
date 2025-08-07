/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 02:22:51 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 03:33:14 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intcount(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	num;

	count = intcount(n);
	num = n;
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	str[count--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[count--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
// #include <stdio.h>

// int main(void)
// {
// 	printf("%s\n", ft_itoa(1234));
// 	printf("%s\n", ft_itoa(-5678));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return 0;
// }
