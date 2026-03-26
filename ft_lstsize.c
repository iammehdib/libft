/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 18:16:53 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/26 18:59:57 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_lstsize(t_list *lst)
{
	size_t	index;

	if (lst == NULL)
		return (0);
	index = 0;
	while (lst)
	{
		index++;
		lst = lst->next;
	}
	return (index);
}
