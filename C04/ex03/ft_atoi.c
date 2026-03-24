int	ft_count_sign(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if(str[i] == '-')
			count++;
		i++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	while(str[i] == ' ')
		i++;
}
