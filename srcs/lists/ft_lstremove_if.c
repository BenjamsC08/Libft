/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 06:44:38 by benjamsc          #+#    #+#             */
/*   Updated: 2025/09/07 06:46:26 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove_if(t_list **head, void *ref, int (*cmp)(void *, void *, size_t), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*curr;

	while (*head && !cmp((*head)->content, ref, sizeof(void *)))
	{
		tmp = *head;
		*head = (*head)->next;
		ft_lstdelone(tmp, del); 
	}
	curr = *head;
	while (curr && curr->next)
	{
		if (!cmp(curr->next->content, ref, sizeof(void *)))
		{
			tmp = curr->next;
			curr->next = tmp->next;
			del(tmp->content);
			free(tmp);
		}
		else
		{
			curr = curr->next;
		}
	}
}
