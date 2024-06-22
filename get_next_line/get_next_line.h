/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:42:47 by oalqubai          #+#    #+#             */
/*   Updated: 2024/05/17 20:04:07 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *string);
char	*ft_strchr(char *string, int num);
char	*ft_space(void);
char	*ft_strjoin(char *b1, char *b2);
// char	*ft_next_line(char *buff1);
// char	*ft_get_line(char *buffer);
// char	*ft_read_file(int filedis, char *buff1);
char	*get_next_line(int filedis);

#endif