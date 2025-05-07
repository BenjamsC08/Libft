#include "libft.h"

int	ft_only_ascii(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isascii(*src))
			return (0);
	}
	return (1);
}
