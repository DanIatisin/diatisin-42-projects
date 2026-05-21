/*#include<unistd.h>*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main()
{
	ft_isascii('A');
	ft_isascii(133);
	return (0);
}*/
