/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:33:24 by oalqubai          #+#    #+#             */
/*   Updated: 2024/07/03 19:14:09 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	received(int signal)
{
	if (signal == SIGUSR1)
		write(1, "Message received!\n", 19);
	exit (0);
}

void	send_data(char letter, int pid)
{
	int	byte;
	int	signal;

	byte = 128;
	signal = 0;
	(void)pid;
	while (byte > 0)
	{
		if ((letter & byte) == byte)
			signal = kill(pid, SIGUSR1);
		else
			signal = kill(pid, SIGUSR2);
		byte = byte / 2;
		usleep(150);
	}
	ft_check_error("", signal);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	index;

	index = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][index])
			send_data(argv[2][index++], pid);
		send_data('\0', pid);
		signal(SIGUSR1, received);
		pause();
		while (1)
			sleep(1);
	}
	else
		write(1, "Error: Invalid number of arguments!\n", 37);
}
