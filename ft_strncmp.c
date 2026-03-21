/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 22:27:11 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/21 22:37:36 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				index;
	const unsigned char	*s1_unsigned;
	const unsigned char	*s2_unsigned;

	index = 0;
	s1_unsigned = (const unsigned char *) s1;
	s2_unsigned = (const unsigned char *) s2;
	while (index < n)
	{
		if (s1_unsigned[index] != s2_unsigned[index] || s1_unsigned[index] == 0)
			return (s1_unsigned[index] - s2_unsigned[index]);
		index++;
	}
	return (0);
}
