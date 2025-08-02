/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:52:37 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/02 15:11:49 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// void aumenta_letra(unsigned int i, char *c)
// {
// 	i = 2;
// 	*c += i;
// }
// int main(void)
// {
// 	char str[] = "banana";
// 	ft_striteri(str, aumenta_letra);
// 	printf("Resultado: %s\n", str);
// 	return 0;
// }
