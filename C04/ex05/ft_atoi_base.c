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
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
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

int	calc_result(char *str, char *base)
{
	int	i;
	int	j;
	int	base_len;
	int	result;

	i = 0;
	result = 0;
	base_len = ft_check_base(base);
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				result = result * base_len + j;
			}
			j++;
		}
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	final;
	int	base_len;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return(0);
	i = 0;
	sign = 1;
	final = 0;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	final = calc_result(str + i, base);

	return (final * sign);
}
