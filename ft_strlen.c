/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:43:30 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/19 20:52:51 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strlen(const char *s)
{
	size_t	str_length;

	str_length = 0;
	while (*s)
	{
		str_length++;
		s++;
	}
	return (str_length);
}
