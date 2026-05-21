/*#include <unistd.h>*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9'))	
		return (1);
	return (0);
}

/*int main()
{
	ft_isalnum('1');
	ft_isalnum('A');
	ft_isalnum('g');
	ft_isalnum('+');
	return (0);
}*/
