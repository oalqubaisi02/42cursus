/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:15:05 by omar              #+#    #+#             */
/*   Updated: 2024/02/02 19:40:33 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= '0' && character <= '9')
		|| (character >= 'A' && character <= 'Z')
		|| (character >= 'a' && character <= 'z'))
	{
		return (1);
	}
	return (0);
}
