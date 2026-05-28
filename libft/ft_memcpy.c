/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:12:38 by diatisin          #+#    #+#             */
/*   Updated: 2026/05/28 14:39:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
/*#include <stdio.h>
#include "libft.h"
#include <stdlib.h>*/

=======
>>>>>>> aba778033d03c1f076f7fa6d63f8ebbfd99addb4
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