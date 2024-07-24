/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:53:52 by oalqubai          #+#    #+#             */
/*   Updated: 2024/05/17 21:55:14 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *string)
{
	size_t	index;

	index = 0;
	if (!string)
		return (0);
	while (string[index] != '\0')
		index++;
	return (index);
}

char	*ft_strchr(char *string, int num)
{
	int	index;

	index = 0;
	if (string == NULL)
		return (NULL);
	while (string[index])
	{
		if (string[index] == (char) num)
			return ((char *)&string[index]);
		index++;
	}
	return (NULL);
}

char	*ft_space(void)
{
	char	*space;

	space = (char *)malloc(1 * sizeof(char));
	space[0] = 0;
	return (space);
}

char	*ft_strjoin(char *b1, char *b2)
{
	int		index1;
	int		index2;
	char	*string;

	if (!b1)
		b1 = ft_space();
	if (!b1 || !b2)
		return (NULL);
	index1 = 0;
	index2 = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(b1) + ft_strlen(b2) + 1));
	if (!string)
		return (0);
	while (b1[index1])
	{
		string[index1] = b1[index1];
		index1++;
	}
	while (b2[index2])
		string[index1++] = b2[index2++];
	string[ft_strlen(b1) + ft_strlen(b2)] = 0;
	free(b1);
	return (string);
}
