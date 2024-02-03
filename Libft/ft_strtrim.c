/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:40:08 by omar              #+#    #+#             */
/*   Updated: 2024/02/02 19:46:06 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*st;

	st = 0;
	if (!s1 && !set)
		return (NULL);
	if (s1 != 0 && set != 0)
	{
		y = ft_strlen(s1);
		x = 0;
		while (s1[x] && ft_strchr(set, s1[x]))
			x++;
		while (y > x && s1[y - 1] && ft_strchr(set, s1[y - 1]))
			y--;
		st = (char *)malloc(sizeof(char) * (y - x + 1));
		if (!st)
			return (NULL);
		ft_strlcpy(st, &s1[x], y - x + 1);
	}
	return (st);
}
