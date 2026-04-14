/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:33:17 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/14 10:19:53 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static int	is_contain_charset(int c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index++])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	index;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (is_contain_charset(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && is_contain_charset(s1[end - 1], set) == 1)
		end--;
	str = malloc(sizeof(char) * ((end - start) + 1));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (start < end)
		str[index++] = s1[start++];
	str[index] = 0;
	return (str);
}
