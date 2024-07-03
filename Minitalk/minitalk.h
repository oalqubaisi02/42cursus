/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:10:10 by oalqubai          #+#    #+#             */
/*   Updated: 2024/07/03 20:03:22 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

void	ft_putchar(char character);
void	ft_putnbr(int number);
int		ft_atoi(const char *string);
void	ft_check_error(const char *string, int signal);

#endif