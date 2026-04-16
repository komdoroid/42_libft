#include "libft.h"

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;
	int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size <= 0)
		return (src_len);
	while (i < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
