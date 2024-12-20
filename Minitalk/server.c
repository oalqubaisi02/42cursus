/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:08:46 by oalqubai          #+#    #+#             */
/*   Updated: 2024/07/03 19:04:30 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receiver(int signal)
{
	static int	byte;
	static char	letter;

	if (signal == SIGUSR1)
		letter = (letter << 1) | 1;
	else if (signal == SIGUSR2)
		letter = (letter << 1) | 0;
	byte++;
	if (byte == 8)
	{
		ft_putchar(letter);
		byte = 0;
		letter = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	write(1, "PID: ", 5);
	ft_putnbr(pid);
	ft_putchar('\n');
	signal(SIGUSR1, receiver);
	signal(SIGUSR2, receiver);
	while (1)
		pause();
	return (0);
}
