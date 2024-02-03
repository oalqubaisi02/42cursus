/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:46:43 by omar              #+#    #+#             */
/*   Updated: 2024/02/02 19:43:59 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	index = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (d);
}
