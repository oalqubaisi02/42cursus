/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:33:02 by oalqubai          #+#    #+#             */
/*   Updated: 2024/07/03 19:05:43 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_check_error(const char *string, int signal)
{
	while (*string)
	{
		if (*string != 32)
		{
			write(1, "Error: Invalid PID!\n", 21);
			exit(1);
		}
		string++;
	}
	if (signal == -1)
	{
		write(1, "Error: Invalid PID!\n", 21);
		exit(1);
	}
}

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_putnbr(int number)
{
	unsigned int	num;

	num = number;
	if (number < 0)
	{
		ft_putnbr('-');
		num = -number;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int	ft_atoi(const char *string)
{
	unsigned int	number;

	number = 0;
	while (*string >= '0' && *string <= '9')
	{
		number = number * 10 + (*string - '0');
		string++;
	}
	ft_check_error(string, 0);
	return (number);
}
