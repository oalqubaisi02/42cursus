/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bezero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:24:59 by omar              #+#    #+#             */
/*   Updated: 2024/02/02 19:32:51 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *sting, size_t limit)
{
	unsigned char	*temp;

	temp = (unsigned char *)sting;
	while (limit--)
		*temp++ = 0;
}
