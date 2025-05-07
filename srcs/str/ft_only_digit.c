#include "libft.h"

int	ft_only_digit(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isdigit(*src))
			return (0);
	}
	return (1);
}
