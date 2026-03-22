/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 11:02:06 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/22 11:12:07 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	index;
	size_t	str_lentgh;
	char	*str;

	index = 0;
	str_lentgh = ft_strlen(s);
	str = malloc(sizeof(char) * (str_lentgh + 1));
	if (str == NULL)
		return (NULL);
	while (index < str_lentgh)
	{
		str[index] = s[index];
		index++;
	}
	str[index] = 0;
	return (str);
}
