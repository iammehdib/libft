/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 22:52:47 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/10 02:13:32 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*s1_unsigned;
	const unsigned char	*s2_unsigned;

	index = 0;
	s1_unsigned = (const unsigned char *) s1;
	s2_unsigned = (const unsigned char *) s2;
	while (index < n)
	{
		if (s1_unsigned[index] != s2_unsigned[index])
			return (s1_unsigned[index] - s2_unsigned[index]);
		index++;
	}
	return (0);
}
