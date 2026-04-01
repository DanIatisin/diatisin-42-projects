#include <stdlib.h>
#include <stdio.h>

int	ft_lenght(int min, int max)
{
	int	i;

	i = 0;
	while(min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*num_arr;
	
	i = 0;
	len = ft_lenght(min, max);
	num_arr = malloc(sizeof(int) * len);
	if (min >= max)
		return (NULL);
	else
	{
		while (min < max)
		{
			num_arr[i] = min;
			i++;
			min++;
		}
	}
	return (num_arr);
}

/*int	main(int argc, char **argv)
{
	int	i;
	int	min;
	int	max;
	int	len;
	int	*num_arr;

	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	len = ft_lenght(min, max);
	num_arr = ft_range(min, max);
	if(argc < 2)
		return (1);
	if(ft_range(min, max) == NULL)
		return (1);
	for(i = 0; i < len; i++)
		printf("%d\n", num_arr[i]);
	free(num_arr);
	return (0);
}*/
