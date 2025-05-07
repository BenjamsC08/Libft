
#include "libft.h"

int	ft_only_alnum(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isalnum(*src))
			return (0);
	}
	return (1);
}
