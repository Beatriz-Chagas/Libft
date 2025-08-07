/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 06:03:41 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/07 06:24:23 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	void	*nnode;
	void	*ncont;

	nlist = NULL;
	while (lst)
	{
		ncont = f(lst->content);
		if (!ncont)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		nnode = ft_lstnew(ncont);
		if (!nnode)
		{
			del(ncont);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstclear(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
