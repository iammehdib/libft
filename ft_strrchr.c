/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 19:25:37 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/13 21:07:37 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				index;
	const unsigned char	*str_unsigned;
	unsigned char		char_unsigned;

	index = ft_strlen(s);
	str_unsigned = (const unsigned char *) s;
	char_unsigned = (unsigned char) c;
	while (index != 0)
	{
		if (str_unsigned[index] == char_unsigned)
			return ((char *) &str_unsigned[index]);
		index--;
	}
	if (str_unsigned[index] == char_unsigned)
		return ((char *) &str_unsigned[index]);
	return (NULL);
}
