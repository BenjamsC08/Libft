#include "libft.h"

char *remove_substring(char *str, const char *sub)
{
	char	*dest;
	char	*cr;
	char	*s;
	char	*d;

	cr = (char *)sub;
	s = ft_strstr(str, cr);
	if (ft_strlen(cr) > st_strlen(str) ||
			!s)
		return (NULL);
	dest = ft_calloc(sizeof(char), ft_strlen(str));
	if (!dest)
		return (NULL);
	d = dest;
	while (*str)
	{
		while (str != s)
			*(dest++) = *(str++);
		if (s[ft_strlen(cr)])
		{
			s += ft_strlen(cr);
			s = ft_strstr(s, cr);
			if (!s)
			{
				while(*str)
					*(dest++) = *(str++);
				return (dest);
			}
			str += ft_strlen(cr);
		}
	}
	return (dest);
}
