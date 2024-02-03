/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:34:55 by omar              #+#    #+#             */
/*   Updated: 2024/02/02 22:25:21 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*pt;
	size_t			j;

	i = start;
	j = ft_strlen(s);
	if (start > j)
		return (ft_strdup(""));
	if (len > j - start)
		len = j - start;
	pt = malloc(sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	while (s[i] && i - start < len)
	{
		pt[i - start] = s[i];
		i++;
	}
	pt[i - start] = '\0';
	return (pt);
}
