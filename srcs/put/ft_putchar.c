#include "libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
