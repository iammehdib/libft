/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 00:03:43 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/15 12:37:02 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*dest_unsigned;
	const unsigned char	*src_unsigned;

	if (dest == src || n == 0)
		return (dest);
	index = 0;
	dest_unsigned = (unsigned char *)dest;
	src_unsigned = (const unsigned char *)src;
	if (dest_unsigned < src_unsigned)
	{
		while (index < n)
		{
			dest_unsigned[index] = src_unsigned[index];
			index++;
		}
	}
	else
	{
		index = n;
		while (index--)
			dest_unsigned[index] = src_unsigned[index];
	}
	return (dest);
}
