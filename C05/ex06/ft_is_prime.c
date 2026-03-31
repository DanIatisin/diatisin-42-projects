#include <stdio.h>
#include <stdlib.h>
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

/*int main (int argc, char **argv)
{
	int	nb;

	nb = atoi(argv[1]);

	if (argc < 2)
		return (0);	
	printf("%d\n", ft_is_prime(nb));
	return 0;
}*/
