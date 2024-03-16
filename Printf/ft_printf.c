/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:41:38 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/16 23:28:45 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char s, va_list args)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (s == 's')
		count += (ft_putstr(va_arg(args, char *)));
	else if (s == 'd' || s == 'i')
		count += (ft_putnbr(va_arg(args, int)));
	else if (s == 'p')
		count += (ft_pointer(va_arg(args, unsigned long long)));
	else if (s == 'u')
		count += ft_putunsignednbr(va_arg(args, unsigned int));
	else if (s == 'x')
		count += (ft_hexanbr(va_arg(args, unsigned int), 0));
	else if (s == 'X')
		count += (ft_hexanbr(va_arg(args, unsigned int), 1));
	else if (s == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(s);
	return (count);
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
