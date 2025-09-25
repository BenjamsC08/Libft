#include "libft.h"

void	ft_lowerise(char **ptr_s)
{
	int		i;
	char	*s;

	s = *ptr_s;
	i = -1;
	while (s[++i])
	{
		if (s[i] >= 'A' || s[i] <= 'Z')
			s[i] = ft_tolower(s[i]);
	}
	*ptr_s = s;
}
