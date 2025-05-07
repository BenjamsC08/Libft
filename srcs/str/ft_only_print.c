#include "libft.h"

int	ft_only_print(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isprint(*src))
			return (0);
	}
	return (1);
}
