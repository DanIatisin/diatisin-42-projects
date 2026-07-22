#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	nb;

	nb = 0;
	base_len = ft_check_base(base);
	if (base_len == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = (unsigned int)(-nbr);
	}
	else
		nb = (unsigned int)nbr;
	if(nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	write (1, &base[nb % base_len], 1);
}
