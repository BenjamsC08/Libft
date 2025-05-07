#include "libft.h"

void	free_strs(char **strs)
{
	int	i;

	i = 0;
	if (!strs)
		return ;
	while (strs[i] != NULL)
		free(strs[i++]);
	free(strs);
}
