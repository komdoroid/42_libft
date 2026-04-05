#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len + 1);
	write(fd, "\n", 1);
	return ;
}

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./test.md", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	ft_putendl_fd("sucessed !", fd);
	close(fd);
	return (0);
}
