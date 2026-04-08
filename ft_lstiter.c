/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:56:52 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/08 15:15:12 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*linked_list;

	if (lst == NULL || f == NULL)
		return ;
	linked_list = lst;
	while (linked_list)
	{
		f(linked_list->content);
		linked_list = linked_list->next;
	}
}
