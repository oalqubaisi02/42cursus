/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putFunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:41:53 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/16 23:18:45 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char letter)
{
	write(1, &letter, 1);
	return (1);
}

int	ft_putstr(char *string)
{
	int	index;

	index = 0;
	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (string[index] != '\0')
	{
		write(1, &string[index], 1);
		index++;
	}
	return (index);
}

int	ft_putnbr(int number)
{
	int	index;

	index = 0;
	if (number < 0)
	{
		index += ft_putchar('-');
		number *= -1;
	}
	if (number > 10)
	{
		index += ft_putnbr(number / 10);
		index += ft_putnbr(number % 10);
	}
	else
		index += ft_putchar(number % 10 + '0');
	return (index);
}

int	ft_putunsignednbr(unsigned int number)
{
	int	index;

	index = 0;
	if (number >= 10)
		index += ft_putunsignednbr(number / 10);
	index += ft_putchar(number % 10 + '0');
	return (index);
}
