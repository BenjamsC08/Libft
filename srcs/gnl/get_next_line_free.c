/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 08:15:41 by benjamsc          #+#    #+#             */
/*   Updated: 2025/09/11 08:15:41 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Renvoie l'index de 'c' si il est present dans 'str', sinon renvoie -1
static int	is_c_in_str(int c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (i);
	}
	if (c == '\0')
		return (i);
	return (-1);
}

static void	*read_joinstash_and_find_nl(int *fd, int *i, char **stash)
{
	int		ret_read;
	char	*buffer;

	*i = -1;
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	ret_read = 1;
	while (ret_read != 0)
	{
		ret_read = read(*fd, buffer, BUFFER_SIZE);
		if (ret_read < 0)
			return (free(*stash), *stash = NULL, free(buffer), buffer = NULL);
		buffer[ret_read] = '\0';
		*stash = ft_strfjoin(*stash, buffer);
		if (!(*stash))
			return (free(buffer), buffer = NULL);
		*i = is_c_in_str('\n', *stash);
		if (*i != -1 || ret_read == 0)
			break ;
	}
	return (free(buffer), buffer = NULL);
}

static int	first_verifications_gnl(int fd, int end, char **stash)
{
	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
	{
		if (stash[fd])
		{
			ft_free_instrs(&stash[fd]);
			stash[fd] = NULL;
		}
		return (1);
	}
	if (end)
		return (ft_free_instrs(&stash[fd]), 1);
	if (!stash[fd])
	{
		stash[fd] = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!stash[fd])
			return (1);
	}
	return (0);
}

char	*get_next_line_free(int fd, int end)
{
	static char	*stash[1024];
	char		*line;
	int			i;

	if (first_verifications_gnl(fd, end, stash))
		return (NULL);
	if (read_joinstash_and_find_nl(&fd, &i, &stash[fd]), !stash[fd])
		return (stash[fd] = NULL);
	if (i != -1)
		line = ft_substr(stash[fd], 0, i + 1);
	else
		line = ft_substr(stash[fd], 0, ft_strlen(stash[fd]));
	if (!line)
		return (free(stash[fd]), stash[fd] = NULL);
	if (i != -1)
		ft_memmove(stash[fd], stash[fd] + i +1, ft_strlen(stash[fd]) - (i + 1));
	else
		stash[fd][0] = '\0';
	return (stash[fd][ft_strlen(stash[fd]) - (i + 1)] = '\0', line);
}
