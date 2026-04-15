/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 23:16:29 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/15 12:33:41 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*dest_unsigned;
	const unsigned char	*src_unsigned;

	if (dest == NULL && src == NULL)
		return (NULL);
	index = 0;
	dest_unsigned = (unsigned char *)dest;
	src_unsigned = (const unsigned char *)src;
	while (index < n)
	{
		dest_unsigned[index] = src_unsigned[index];
		index++;
	}
	return (dest);
}
