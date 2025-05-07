#include "libft.h"

int	ft_only_alpha(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isalpha(*src))
			return (0);
	}
	return (1);
}
