/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:44:17 by diatisin          #+#    #+#             */
/*   Updated: 2026/05/28 12:49:08 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while(i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}

	return (NULL);
}
