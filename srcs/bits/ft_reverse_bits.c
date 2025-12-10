/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moa <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 05:37:04 by moa               #+#    #+#             */
/*   Updated: 2025/02/24 00:07:12 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint	ft_reverse_bits(t_uint octets)
{
	t_ulong	i;
	t_uint	tmp;

	i = -1;
	tmp = 0;
	while (++i < sizeof(octets) * 8)
	{
		tmp <<= 1;
		tmp |= (octets & 1);
		octets >>= 1;
	}
	return (tmp);
}
