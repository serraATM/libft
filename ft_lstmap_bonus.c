/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:37:13 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/12 16:22:47 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_cont;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_cont = f(lst->content);
		if (!new_cont)
			break ;
		new_node = ft_lstnew(new_cont);
		if (!new_node)
		{
			if (del)
				del(new_cont);
			break ;
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	if (lst)
		ft_lstclear(&new_list, del);
	return (new_list);
}
