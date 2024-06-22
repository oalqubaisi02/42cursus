/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:43:18 by omar              #+#    #+#             */
/*   Updated: 2024/05/17 20:09:38 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_next_line(char *buff1)
{
	int		index1;
	int		index2;
	char	*buff2;

	index1 = 0;
	while (buff1[index1] != '\0' && buff1[index1] != '\n')
		index1++;
	if (buff1[index1] == '\0')
		return (free(buff1), NULL);
	buff2 = malloc(sizeof(char) * (ft_strlen(buff1) - index1 + 1));
	if (buff1 == NULL)
		return (NULL);
	index1++;
	if (!buff1[index1])
	{
		free(buff2);
		free(buff1);
		return (NULL);
	}
	index2 = 0;
	while (buff1[index1] != '\0')
		buff2[index2++] = buff1[index1++];
	buff2[index2] = '\0';
	free(buff1);
	return (buff2);
}

char	*ft_get_line(char *buffer)
{
	int		index;
	char	*line;

	index = 0;
	if (!buffer[index])
		return (NULL);
	while (buffer[index] != '\0' && buffer[index] != '\n')
		index++;
	line = (char *)malloc(sizeof(char) * (index + 2));
	if (!line)
		return (NULL);
	index = 0;
	while (buffer[index] != '\0' && buffer[index] != '\n')
	{
		line[index] = buffer[index];
		index++;
	}
	if (buffer[index] == '\n')
	{
		line[index] = buffer[index];
		index++;
	}
	line[index] = '\0';
	return (line);
}

char	*ft_read_file(int filedis, char *buff1)
{
	char	*buff2;
	int		bytes;

	buff2 = malloc((size_t)BUFFER_SIZE + 1 * (sizeof(char)));
	if (!buff2)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(buff1, '\n') && (bytes != 0))
	{
		bytes = read(filedis, buff2, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buff2);
			free(buff1);
			return (NULL);
		}
		buff2[bytes] = '\0';
		buff1 = ft_strjoin(buff1, buff2);
	}
	free(buff2);
	return (buff1);
}

char	*get_next_line(int filedis)
{
	char		*line;
	static char	*buffer[9999];

	if (filedis < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[filedis] = ft_read_file(filedis, buffer[filedis]);
	if (!buffer[filedis])
		return (NULL);
	line = ft_get_line(buffer[filedis]);
	buffer[filedis] = ft_next_line(buffer[filedis]);
	return (line);
}
