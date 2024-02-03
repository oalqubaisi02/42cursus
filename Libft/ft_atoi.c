/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:26:37 by omar              #+#    #+#             */
/*   Updated: 2024/02/03 21:50:06 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int		index;
	int		sign;
	long	result;

	index = 0;
	sign = 1;
	result = 0;
	while ((string[index] >= 9 && string[index] <= 13) || string[index] == 32)
		index++;
	if (string[index] == '+' || string[index] == '-')
	{
		if (string[index] == '-')
			sign = sign * -1;
		index++;
	}
	while (string[index] >= '0' && string[index] <= '9')
	{
		result = result * 10 + string[index] - 48;
		if (result > LONG_MAX && sign == -1)
			return (0);
		else if (result >= LONG_MAX && sign == 1)
			return (-1);
		index++;
	}
	return (result * sign);
}
