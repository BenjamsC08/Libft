#include "libft.h"

int	ft_only_whitespace(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_iswhitespace(*src))
			return (0);
	}
	return (1);
}
