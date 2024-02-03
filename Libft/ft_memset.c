/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:41:02 by omar              #+#    #+#             */
/*   Updated: 2024/02/02 19:44:04 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*temp;

	index = 0;
	temp = (unsigned char *)b;
	while (index < len)
	{
		temp[index] = (unsigned char)c;
		index++;
	}
	return (temp);
}
