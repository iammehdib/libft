/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 13:25:05 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/21 18:38:40 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	index;
	size_t	dst_length;
	size_t	src_length;

	index = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length >= dsize)
		return (dsize + src_length);
	while (src[index] && index < ((dsize - dst_length) - 1))
	{
		dst[dst_length + index] = src[index];
		index++;
	}
	dst[dst_length + index] = 0;
	return (dst_length + src_length);
}
