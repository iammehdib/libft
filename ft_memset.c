/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:56:00 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/20 16:29:27 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	c_unsigned;
	unsigned char	*str_unsigned;

	index = 0;
	c_unsigned = (unsigned char) c;
	str_unsigned = (unsigned char *) s;
	while (index < n)
	{
		str_unsigned[index++] = c_unsigned;
	}
	return (s);
}
