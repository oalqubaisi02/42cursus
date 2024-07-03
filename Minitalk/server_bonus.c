/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:32:27 by oalqubai          #+#    #+#             */
/*   Updated: 2024/07/03 19:15:20 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	receiver(int signal, siginfo_t *info, void *ptr)
{
	static int	byte;
	static char	letter;

	(void)ptr;
	if (signal == SIGUSR1)
		letter = (letter << 1) | 1;
	else if (signal == SIGUSR2)
		letter = (letter << 1) | 0;
	byte++;
	if (byte == 8)
	{
		ft_putchar(letter);
		if (!letter)
		{
			usleep(350);
			kill(info->si_pid, SIGUSR1);
		}
		byte = 0;
		letter = 0;
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sa;

	pid = getpid();
	write(1, "PID: ", 5);
	ft_putnbr(pid);
	ft_putchar('\n');
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = receiver;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
