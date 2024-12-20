/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:41:49 by oalqubai          #+#    #+#             */
/*   Updated: 2024/03/22 21:43:30 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <strings.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int	ft_putchar(char letter);
int	ft_putstr(char *string);
int	ft_putnbr(int number);
int	ft_putunsignednbr(unsigned int number);
int	ft_hexanbr(unsigned long long int number, int caps);
int	ft_pointer(unsigned long long pointer);
int	ft_format(char letter, va_list args);
int	ft_printf(const char *format, ...);

#endif