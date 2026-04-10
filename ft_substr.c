/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 14:16:41 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/10 18:32:23 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_length;
	size_t	index;
	char	*str;

	if (s == NULL)
		return (NULL);
	str_length = ft_strlen(s);
	if (start >= (unsigned int) str_length)
		return (ft_strdup(""));
	if ((str_length - start) < len)
		len = str_length - start;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (s[start] && (index < len))
		str[index++] = s[start++];
	str[index] = 0;
	return (str);
}
