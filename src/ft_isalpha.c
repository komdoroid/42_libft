int	ft_isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c);
	else if ('a' <= c && c <= 'z')
		return (c);
	return (0);
}
