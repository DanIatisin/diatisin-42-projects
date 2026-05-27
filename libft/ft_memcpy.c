/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:12:38 by diatisin          #+#    #+#             */
/*   Updated: 2026/05/21 14:13:09 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"
void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (dest);
}

/*int	main(void)
{
	char	src[6] = "abcdef";
	char	*dest;

	dest = malloc(sizeof(char) * 5);
	dest = (char *)memcpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}*/
