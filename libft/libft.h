#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
	int		ft_isalnum(int c);
	int		ft_isalpha(int c);
	int		ft_isascii(int c);
	int		ft_isdigit(int c);
	int		ft_isprint(int c);
	void	ft_bero(void *s, size_t n);
	void	*memset(void *s, int c, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memmove(void *dest, void *src, size_t n);
	size_t	*ft_strlcat(char *dst, const char *src, size_t size);
	
#endif
