#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	isprint(int	c);
size_t	ft_strlen(const char *s);
int	toupper(int c);
int	ft_tolower(int	c);
int	ft_strncmp (const char *s1, const char *s2, size_t n);
char *ft_strcpy(char *dest, const char *src);
void    *ft_memchr(const void   *s, int c, size_t   n);

#endif

