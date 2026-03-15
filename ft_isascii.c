int	ft_isascii(int c)
{
	if (0 <= c && c < 0x80)
		return (c);
	return (0);
}
