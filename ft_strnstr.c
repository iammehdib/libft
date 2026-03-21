/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 23:03:45 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/21 23:42:00 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	find_i;

	index = 0;
	if (little[0] == 0)
		return ((char *) &big[0]);
	while (index < len && big[index])
	{
		find_i = 0;
		while (index + find_i < len && big[index + find_i] == little[find_i]
			&& little[find_i])
			find_i++;
		if (little[find_i] == 0)
			return ((char *) &big[index]);
		index++;
	}
	return (0);
}
