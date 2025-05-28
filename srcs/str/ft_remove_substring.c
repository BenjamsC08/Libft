#include "libft.h"

char *ft_remove_substring(char *str, const char *sub)
{
	char	*dest;
	char	*cr;
	char	*s;
	char	*d;

	cr = (char *)sub;
	s = ft_strstr(str, cr);
	if (ft_strlen(cr) > ft_strlen(str) || !s)
		return (NULL);
	dest = ft_calloc(sizeof(char), ft_strlen(str));
	if (!dest)
		return (NULL);
	d = dest;
	while (*str)
	{
		while (str != s)
			*(d++) = *(str++);
		if (s[ft_strlen(cr)])
		{
			s = ft_strstr((s + ft_strlen(cr)) , cr);
			if (!s)
			{
				while(*(str + ft_strlen(cr)))
					*(d++) = *(str++);
				return (dest);
			}
			str += ft_strlen(cr);
		}
		else
			return (dest);
	}
	return (dest);
}
