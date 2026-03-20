/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:35:49 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/20 23:14:58 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*str_unsigned;

	index = 0;
	str_unsigned = (unsigned char *) s;
	while (index < n)
	{
		str_unsigned[index++] = 0;
	}
}
