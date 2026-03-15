#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str = "Hello World!";

	ft_putchar(str);
	return(0);
}
