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
	char	*start;
	
	start = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	
	while(n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
		printf("%s", start);

		return (start);
}
/*
int	main(void)
{	
	char	buff[] = "World1"; 
	
	ft_strncpy(buff, "Hello" , 3);

	return 0;
}*/
