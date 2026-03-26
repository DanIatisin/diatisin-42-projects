int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_len;

	if (base_len < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while(base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_len);
}

int	ft_putnbr_base(int nbr, *base)
{
	
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;

	while (str[i] == ' ' || str[i] == '-' || str[])
	{}
}
