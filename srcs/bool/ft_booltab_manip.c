/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_booltab_manip.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:31:36 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 08:52:15 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bit_set(t_booltab *tab, unsigned int pos)
{
	*tab |= (1U << pos);
}

void	bit_clear(t_booltab *tab, unsigned int pos)
{
	*tab &= ~(1U << pos);
}

unsigned int	bit_get(t_booltab tab, unsigned int pos)
{
	return ((tab >> pos) & 1U);
}

void	bit_toggle(t_booltab *tab, unsigned int pos)
{
	*tab ^= (1U << pos);
}
