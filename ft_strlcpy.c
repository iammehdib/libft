/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 10:54:35 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/21 11:51:19 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t dsize)
{
	size_t	index;

	index = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	while (src[index] && index < (dsize - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	return (ft_strlen(src));
}
