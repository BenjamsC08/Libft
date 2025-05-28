#include "libft.h"

int	is_in_charset(char c, const char *charset)
{
	char	cs;

	cs = (char *)charset - 1;
	while (*(++cs))
	{
		if (*cs == c)
			return (1);
	}
	return (0);
}

char *remove_charset(char *str, const char *charset)
{
	char	*dest;
	char	*d;

	dest = ft_calloc(sizeof(char), ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	d = dest;
	while (*str)
	{
		if (!is_in_charset(*str, charset)
			*(d++) = *str;
		str++;
	}
}
