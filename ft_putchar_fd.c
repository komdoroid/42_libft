#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./test.md", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	ft_putchar_fd('c', fd);
	close(fd);
	return (0);
}
