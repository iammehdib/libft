/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:15:52 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/14 03:30:14 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_linked_list;
	t_list	*first_linked_list;
	t_list	*last_linked_list;

	if (lst == NULL || f == NULL || del == NULL)
		return (lst);
	first_linked_list = NULL;
	while (lst)
	{
		current_linked_list = ft_lstnew(f(lst->content));
		if (current_linked_list == NULL)
		{
			ft_lstdelone(current_linked_list, del);
			return (NULL);
		}
		if (first_linked_list == NULL)
			first_linked_list = current_linked_list;
		else
			last_linked_list->next = current_linked_list;
		last_linked_list = current_linked_list;
		lst = lst->next;
	}
	return (first_linked_list);
}
