/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putFunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:41:53 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/22 21:42:35 by oalqubai         ###   ########.fr       */
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
		string = "(null)";
	}
	while (*string)
	{
		index += ft_putchar(*string++);
	}
	return (index);
}

int	ft_putnbr(int number)
{
	int		index;

	index = 0;
	if (number < 0)
	{
		ft_putchar('-');
		index++;
		number = -number;
	}
	index += ft_putunsignednbr((unsigned int)number);
	return (index);
}

int	ft_putunsignednbr(unsigned int number)
{
	int	index;

	index = 0;
	if (number >= 10)
		index += ft_putunsignednbr(number / 10);
	index++;
	ft_putchar(number % 10 + '0');
	return (index);
}
