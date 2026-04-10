/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:15:52 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/10 18:15:15 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_linked_list;
	t_list	*new_linked_list;

	if (lst == NULL || f == NULL || del == NULL)
		return (lst);
	current_linked_list = lst;
	while (current_linked_list)
	{
		new_linked_list = ft_lstnew(current_linked_list->content);
		if (new_linked_list == NULL)
		{
			ft_lstdelone(new_linked_list, del);
			return (NULL);
		}
		new_linked_list = new_linked_list->next;
		current_linked_list = current_linked_list->next;
	}
	return (new_linked_list);
}
