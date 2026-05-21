/*#include <stdio.h>
#include <stdlib.h>*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str = s;
	size_t	i;

	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main()
{
	char str[10] = "zgs2323sd2";
	char *string;

	string = (char *)ft_memset(str, 'b', 3);
	printf("%s\n", string);
	return (0);
}*/
