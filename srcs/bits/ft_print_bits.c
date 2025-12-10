/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moa <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 05:35:20 by moa               #+#    #+#             */
/*   Updated: 2025/02/04 06:06:46 by moa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(t_uint octets)
{
	int				i;
	unsigned int	tmp;

	octets = ft_reverse_bits(octets);
	i = -1;
	while (++i < 32)
	{
		tmp = (octets & 1);
		if (tmp == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octets >>= 1;
	}
	write(1, "\n", 1);
}

