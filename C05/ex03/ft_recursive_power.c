/*#include <stdio.h>*/
int	ft_recursive_power(int nb, int power)
{
	int	result;
	
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power > 0)
	{
		result *= (nb * ft_recursive_power(nb, (power - 1)));
	}	
	return (result);
}

/*int	main()
{
	printf("%d\n", ft_recursive_power(-2, 3));

	return 0;
}*/
