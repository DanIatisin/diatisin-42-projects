int	strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*search_world(char *sep, char *str)
{
	char	*result;
	int	i;

	i = 0;
	while(sep[i])
	{
		j = 0;
		while (str[j] != '\0')
		{
			if(str[j] != src[i])
				result[j] = str[j];
			j++;
		}
		i++;
	}
	return (result);
}

/*char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	sep_len;
	char	str_len;

	if (size == 0)
	{
		result = malloc(1);
	if (result)
		result[0] = '\0';
	return (resutl);
	}
}*/

:
