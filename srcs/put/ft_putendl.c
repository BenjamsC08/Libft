#include "libft.h"

void	ft_putendl_fd(char *s)
{
	char	*s1;

	s1 = s - 1;
	while (*(++s1))
		write(1, s1, 1);
	write(1, "\n", 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	char	*s1;

	s1 = s - 1;
	while (*(++s1))
		write(fd, s1, 1);
	write(fd, "\n", 1);
}
