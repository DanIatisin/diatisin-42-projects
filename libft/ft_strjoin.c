<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <diatisin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:49:59 by diatisin          #+#    #+#             */
/*   Updated: 2026/06/08 12:04:57 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> ec08bee0a197fc3ec42809c8af8dd258025b6466
#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
<<<<<<< HEAD
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*result;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
=======
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * ((s1_len + s2_len) + 1));
>>>>>>> ec08bee0a197fc3ec42809c8af8dd258025b6466
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
<<<<<<< HEAD
		result[j++] = s1[i++];
	i = 0;
	while (s2[i])
		result[j++] = s2[i++];
=======
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
>>>>>>> ec08bee0a197fc3ec42809c8af8dd258025b6466
	result[j] = '\0';
	return (result);
}
