/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:13:08 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/10 18:18:57 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*linked_list;

	linked_list = malloc(sizeof(t_list));
	if (linked_list == NULL)
		return (NULL);
	linked_list->content = content;
	linked_list->next = NULL;
	return (linked_list);
}
