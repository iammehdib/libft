/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 19:11:43 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/15 13:30:02 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_linked_list;

	if (lst == NULL)
		return (0);
	while (lst)
	{
		last_linked_list = lst;
		lst = lst->next;
	}
	return (last_linked_list);
}
