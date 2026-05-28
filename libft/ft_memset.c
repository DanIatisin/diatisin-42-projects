<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:32:52 by diatisin          #+#    #+#             */
/*   Updated: 2026/05/28 14:33:35 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> aba778033d03c1f076f7fa6d63f8ebbfd99addb4
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
<<<<<<< HEAD
}
=======
}
>>>>>>> aba778033d03c1f076f7fa6d63f8ebbfd99addb4
