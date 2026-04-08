/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 19:32:14 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/08 11:19:18 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;
	t_list	*linked_list;

	if (lst == NULL || new == NULL)
		return ;
	linked_list = *lst;
	if (linked_list == NULL)
		return ;
	while (linked_list)
	{
		last_lst = linked_list;
		linked_list = linked_list->next;
	}
	new->next = NULL;
	*lst = new;
}
