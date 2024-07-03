/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:33:43 by oalqubai          #+#    #+#             */
/*   Updated: 2024/07/03 19:05:52 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <sys/types.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

void	ft_putchar(char character);
void	ft_putnbr(int number);
int		ft_atoi(const char *str);
void	ft_check_error(const char *str, int signal);

#endif