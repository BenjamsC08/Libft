
#include "libft.h"

char	*ft_strndup(const char *s, t_uint n)
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
	while (*s || n > 0)
	{
		*(str++) = *(s++);
		n--;
	}
	return (src);
