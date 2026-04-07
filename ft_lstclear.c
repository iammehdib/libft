/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:46:58 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/07 16:49:12 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*linked_list;
	t_list	*current_linked_list;

	if (lst == NULL || del == NULL)
		return ;
	linked_list = *lst;
	while (linked_list)
	{
		current_linked_list = linked_list;
		del(current_linked_list->content);
		free(current_linked_list);
		linked_list = linked_list->next;
	}
	free(lst);
}
