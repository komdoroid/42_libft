int	ft_isspace(int c)
{
	if (9 <= c && c <= 13)
		return (c);
	else if (c == ' ')
		return (c);
	return (0);
}
