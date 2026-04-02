/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:03:59 by diatisin          #+#    #+#             */
/*   Updated: 2026/04/01 12:06:39 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	curr_num;

	if (nb < 2)
		curr_num = 2;
	else
		curr_num = nb;
	while (curr_num)
	{
		if (ft_is_prime(curr_num) == 1)
			break ;
		curr_num++;
	}
	return (curr_num);
}

/*int	main(int argc, char **argv)
{
	int	num;	

	if (argc < 2)
		return (1);
	num = atoi(argv[1]);
	printf("%d\n", ft_find_next_prime(num));
	return (0);
}*/
