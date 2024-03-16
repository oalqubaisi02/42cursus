/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexaPointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:41:44 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/16 22:54:37 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexanbr(unsigned long long int number, int caps)
{
	int		index;
	char	*base;

	index = 0;
	base = "0123456789abcdef";
	if (caps)
		base = "0123456789ABCDEF";
	if (number >= 16)
		index += ft_hexanbr(number / 16, caps);
	index += ft_putchar(base[number % 16]);
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
