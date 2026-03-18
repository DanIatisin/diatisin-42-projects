/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:19:31 by diatisin          #+#    #+#             */
/*   Updated: 2026/03/18 16:24:04 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

		dest[i + 1] = '\0';

		printf("%s", dest);

		return (dest);
}
/*
int	main(void)
{
	char src[] = "abcde";
	char dest[] = "defg";
	
	ft_strncpy(dest, src , 3);

	return 0;
}*/
