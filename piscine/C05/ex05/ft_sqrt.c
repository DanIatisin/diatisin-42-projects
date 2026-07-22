/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:00:32 by diatisin          #+#    #+#             */
/*   Updated: 2026/04/01 12:08:09 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	num = 2;
	while ((num * num) <= nb)
	{
		if ((num * num) == nb)
			return (num);
		num++;
	}
	return (0);
}
