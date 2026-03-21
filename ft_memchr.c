/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 22:38:53 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/21 22:50:59 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				index;
	const unsigned char	*str_unsigned;
	unsigned char		char_unsigned;

	index = 0;
	str_unsigned = (const unsigned char *) s;
	char_unsigned = (unsigned char) c;
	while (index < n)
	{
		if (str_unsigned[index] == char_unsigned)
			return ((void *) &str_unsigned[index]);
		index++;
	}
	return (NULL);
}
