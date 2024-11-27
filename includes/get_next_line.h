/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:17:52 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/24 09:39:50 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>

typedef struct s_gnl_list
{
	char				*content;
	struct s_gnl_list	*next;
}	t_gnl_list;

t_gnl_list		*ft_gnl_lstlast(t_gnl_list *lst);
int				found_nwline(t_gnl_list *storage);
void			alloc_size_line(char **ptr_line, t_gnl_list *storage);
void			free_all_storage(t_gnl_list *stash);

#endif // !GET_NEXT_LINE_H
