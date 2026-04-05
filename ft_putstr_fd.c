#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	return ;
}

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./test.md", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	ft_putstr_fd("successed !", fd);
	close(fd);
	return (0);
}	
