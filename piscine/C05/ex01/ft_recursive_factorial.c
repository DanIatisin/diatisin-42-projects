/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:54:59 by diatisin          #+#    #+#             */
/*   Updated: 2026/04/01 11:56:12 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	result = result * ft_recursive_factorial(nb - 1);
	return (result);
}

/*int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return 0;
}*/
