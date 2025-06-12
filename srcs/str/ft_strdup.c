/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:41:52 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/11 21:42:01 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		l_src;
	char	*str;
	char	*src;

	if (!s)
		return (NULL);
	l_src = ft_strlen(s);
	str = (char *)ft_calloc((l_src + 1), sizeof(char));
	if (! str)
		return (0);
	src = str;
	while (*s)
		*(str++) = *(s++);
	return (src);
}

char	*ft_strndup(const char *s, int n)
{
	int		l_src;
	char	*str;
	char	*src;

	if (!s || n <= 0)
		return (NULL);
	l_src = ft_strlen(s);
	str = (char *)ft_calloc((n + 1), sizeof(char));
	if (!str)
		return (0);
	src = str;
	while (*s && n > 0)
	{
		*(str++) = *(s++);
		n--;
	}
	return (src);
}
