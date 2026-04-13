/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 23:44:37 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/13 22:09:49 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		index;
	long	sign;
	long	result;

	index = 0;
	sign = 1;
	result = 0;
	while (nptr[index] == ' ' || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = (result * 10) + (nptr[index] - '0');
		if (result < 0 && sign == 1)
			return (-1);
		if (result < 0 && sign == -1)
			return (0);
		index++;
	}
	return ((int) result * sign);
}

/*#include "stdio.h"
#include "stdlib.h"

int	main(void)
{
	printf("41414: %d\n", atoi("41414"));
	printf("-41414: %d\n", ft_atoi("-41414"));
	printf("313: %d\n", atoi("313"));
	printf("-313: %d\n", ft_atoi("-313"));
	printf("999999999999999999999999999999: %d\n", 
		atoi("999999999999999999999999999999"));
	printf("-999999999999999999999999999999: %d\n", 
		atoi("-999999999999999999999999999999"));
	printf("999999999999999999999999999999: %d\n", 
		ft_atoi("999999999999999999999999999999"));
	printf("-999999999999999999999999999999: %d", 
		ft_atoi("-999999999999999999999999999999"));
		
}*/
