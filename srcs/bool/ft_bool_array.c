/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bool_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:49:03 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 09:19:24 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolarray	create_bool_array(unsigned int num_bits)
{
	unsigned int	num_ints;
	t_booltab		*data;

	num_ints = (num_bits + 31) / 32;
	data = ft_calloc(num_ints, sizeof(t_booltab));
	return ((t_boolarray){data, num_bits});
}

void	free_bool_array(t_boolarray *arr)
{
	free(arr->data);
	arr->data = NULL;
	arr->bit_capacity = 0;
}
