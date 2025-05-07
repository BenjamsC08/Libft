/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:13:29 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/11 21:13:56 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*last;

	current = *lst;
	while (current != NULL)
	{
		last = current;
		current = current->next;
		ft_lstdelone(last, del);
	}
	*lst = NULL;
}
