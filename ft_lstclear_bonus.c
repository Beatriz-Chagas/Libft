/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 05:48:00 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 05:57:59 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*tsl;

	if (!lst || !del)
		return (NULL);
	tsl = *lst;
	while (tsl)
	{
		if (del)
			del(tsl->content);
		aux = tsl->next;
		free(tsl);
		tsl = aux;
	}
	*lst = NULL;
}
