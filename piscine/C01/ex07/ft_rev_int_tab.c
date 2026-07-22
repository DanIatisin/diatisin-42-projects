/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:36:31 by diatisin          #+#    #+#             */
/*   Updated: 2026/03/16 17:43:05 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
}*/

int	main(void)
{	
	int	num[] = {4, 2, 5, 3};
	int	size = 0;
	int	i = 0;	
	while (*num != NULL)
	{
		size++;
		i++;
	}

	printf("%d\n", size);

	return(0);
}
