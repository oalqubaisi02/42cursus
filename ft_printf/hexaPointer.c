/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexaPointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:29:22 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/22 21:43:05 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexanbr(unsigned long long int number, int caps)
{
	int		index;
	char	*alphanum;

	index = 0;
	alphanum = "0123456789abcdef";
	if (caps)
		alphanum = "0123456789ABCDEF";
	if (number >= 16)
		index += ft_hexanbr(number / 16, caps);
	index += ft_putchar(alphanum[number % 16]);
	return (index);
}

int	ft_pointer(unsigned long long pointer)
{
	int	index;

	index = 0;
	index += ft_putstr("0x");
	if (pointer == 0)
		index += ft_putstr("0");
	else
		index += ft_hexanbr(pointer, 0);
	return (index);
}
