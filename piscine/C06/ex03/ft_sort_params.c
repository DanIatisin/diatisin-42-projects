/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:18:00 by diatisin          #+#    #+#             */
/*   Updated: 2026/04/01 12:20:11 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (1);
	j = 1;
	while (j < argc -1)
	{
		i = 1;
		while (i < argc -1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		j++;
	}
	ft_putstr(argv);
	return (0);
}
