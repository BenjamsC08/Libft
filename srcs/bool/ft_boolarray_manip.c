/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolarray_manip.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:42:05 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 09:17:29 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ba_set(t_boolarray *arr, unsigned int pos)
{
	bit_set(&arr->data[pos / 32], pos % 32);
}

void	ba_clear(t_boolarray *arr, unsigned int pos)
{
	bit_clear(&arr->data[pos / 32], pos % 32);
}

unsigned int	ba_get(t_boolarray arr, unsigned int pos)
{
	return (bit_get(arr.data[pos / 32], pos % 32));
}

void	ba_toggle(t_boolarray *arr, unsigned int pos)
{
	bit_toggle(&arr->data[pos / 32], pos % 32);
}
