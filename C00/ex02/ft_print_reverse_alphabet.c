/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:21:52 by diatisin          #+#    #+#             */
/*   Updated: 2026/03/13 11:24:28 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{

	char	c = 'z';

	while(c <= 'z' && c >= 'a')
	{
		
		write(1, &c, 1);
		c--;
	
	}

}

/*
int	main()
{

	ft_print_reverse_alphabet();
	return 0;
}
*/
