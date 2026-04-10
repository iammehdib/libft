/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:15:52 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/10 17:58:15 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*linked_list;
	t_list	*current_linked_list;

	if (lst == NULL || f == NULL || del == NULL)
		return (lst);
	linked_list = lst;
	current_linked_list = NULL;
	while (current_linked_list)
	{
		current_linked_list = ft_lstnew(current_linked_list->content);
		if (current_linked_list == NULL)
		{
			ft_lstdelone(current_linked_list, del);
			return (NULL);
		}
		current_linked_list = current_linked_list->next;
	}
	return (linked_list);
}
