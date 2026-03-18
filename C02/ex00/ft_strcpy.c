/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:07:44 by diatisin          #+#    #+#             */
/*   Updated: 2026/03/18 13:18:00 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
/*
int	main (void)
{
	char	src[] = "abcde";
	char	*dest;
	for(int i = 0; i < 6; i++)
	{
		printf("%s", ft_strcpy(dest, src));
	}/nfs/homes/diatisin/progetti-da-pushare/C01/ex08

	return (0);
}*/
