int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i)
}

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;
	int	dst_len;
	int	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= 0)
		return (src_len);
	while (i < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++
	}
	dst[i] = '\0';
	return (src_len);
}
