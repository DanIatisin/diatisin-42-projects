/*#include<unistd.h>*/
int	ft_isprint(int c)
{
	if(c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
	ft_isprint(' ');
	ft_isprint('\0');	

	return (0);
}*/
