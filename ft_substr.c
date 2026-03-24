#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*substr;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

int	main(void)
{
	char	s[] = "Im super saiyan";
	unsigned int	start = 5;
	size_t	len = 5;
	char	*res;

	res = ft_substr(s, start, len);
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
}
