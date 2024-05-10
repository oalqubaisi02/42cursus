/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:41:38 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/22 21:43:44 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char letter, va_list args)
{
	if (letter == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (letter == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (letter == 'p')
		return (ft_pointer(va_arg(args, unsigned long long)));
	else if (letter == 'd' || letter == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (letter == 'u')
		return (ft_putunsignednbr(va_arg(args, unsigned int)));
	else if (letter == 'x')
		return (ft_hexanbr(va_arg(args, unsigned int), 0));
	else if (letter == 'X')
		return (ft_hexanbr(va_arg(args, unsigned int), 1));
	else if (letter == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(letter));
}

int	ft_printf(const char *format, ...)
{
	int		index;
	va_list	args;

	index = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			index += ft_format(*format, args);
		}
		else
			index += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (index);
}
