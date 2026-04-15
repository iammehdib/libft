/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 02:55:00 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/15 19:37:11 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include "string.h"
#include <unistd.h>

static int	get_itoa_malloc_size(int n)
{
	size_t		index;
	long		n_long_temp;

	index = 0;
	n_long_temp = n;
	if (n_long_temp < 0)
	{
		n_long_temp = -n_long_temp;
		index++;
	}
	while (n_long_temp > 0)
	{
		n_long_temp /= 10;
		index++;
	}
	return (index);
}

static char	*get_zero_result_from_itoa(void)
{
	char	*str;

	str = malloc(2);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	long	n_long;
	char	*str;
	size_t	index;

	n_long = n;
	if (n == 0)
		return (get_zero_result_from_itoa());
	str = malloc(sizeof(char) * (get_itoa_malloc_size(n) + 1));
	if (str == NULL)
		return (NULL);
	index = get_itoa_malloc_size(n);
	str[index] = 0;
	index--;
	if (n_long < 0)
	{
		str[0] = '-';
		n_long = -n_long;
	}
	while (n_long > 0)
	{
		str[index--] = '0' + (n_long % 10);
		n_long /= 10;
	}
	return (str);
}
