#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return(len);
}

/*int	main(void)
{
	char	*str = "Hello";
	
	int	length;
	length = ft_strlen(str);

	printf("length: %d\n", length);

	return (0);
}*/
