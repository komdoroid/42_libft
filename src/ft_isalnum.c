int	ft_isalnum(int c)
{
	if ('0' <= c && c <= '9')
		return (c);
	else if ('A' <= c && c <= 'Z')
		return (c);
	else if ('a' <= c && c <= 'z')
		return (c);
	return (0);
}
