/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 19:10:35 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/21 19:23:02 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t				index;
	const unsigned char	*str_unsigned;
	unsigned char		char_unsigned;

	index = 0;
	str_unsigned = (const unsigned char *) s;
	char_unsigned = (unsigned char) c;
	while (str_unsigned[index])
	{
		if (str_unsigned[index] == char_unsigned)
			return ((char *) &str_unsigned[index]);
		index++;
	}
	if (str_unsigned[index] == char_unsigned)
		return ((char *) &str_unsigned[index]);
	return (NULL);
}
