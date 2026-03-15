#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

// stdlib
int	ft_atoi(char *str);

// ctype
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isspace(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

// str
char	*ft_strchr(char *str, char c);
int	ft_strlcat(char *dst, char *src, int size);
int	ft_strlcpy(char *dst, char *src, int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *str1, char *str2, int size);
char *strnstr(char *big, char *little, int len);
char	*ft_strrchr(char *str, int c);
char *ft_strdup(char *s);

#endif
