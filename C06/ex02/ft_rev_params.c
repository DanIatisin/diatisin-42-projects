#include <unistd.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;
//	char	c;
	
	i = 1;
	if(argc < 2)
		return (1);
	while(argv[i])
		i++;
	i--;	
	while(i > 0)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
	return 0;
}
