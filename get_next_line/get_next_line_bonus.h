/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:54:05 by oalqubai          #+#    #+#             */
/*   Updated: 2024/05/18 20:34:37 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *string);
char	*ft_strchr(char *string, int num);
char	*ft_space(void);
char	*ft_strjoin(char *b1, char *b2);
char	*ft_next_line(char *buff1);
char	*ft_get_line(char *buffer);
char	*ft_read_file(int filedis, char *buff1);
char	*get_next_line(int filedis);

#endif