/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 01:21:41 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/26 05:04:12 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(s)) + 1));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = 0;
	return (str);
}
