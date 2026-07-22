/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:52:59 by diatisin          #+#    #+#             */
/*   Updated: 2026/04/01 11:54:33 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		result = result * nb ;
		nb--;
	}
	return (result);
}

/*int main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
