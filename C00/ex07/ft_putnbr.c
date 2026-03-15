#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if(nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(200);
	write(1, "\n", 1);
	ft_putnbr(-46);
	write(1, "\n", 1);
	return(0);
}
