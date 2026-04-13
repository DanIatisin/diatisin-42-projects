#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	char	*dest;
	int 	i;

	if(argc < 2)
		return (1);
	i = 1;
	dest = ft_strdup(argv[i]);
	printf("%s\n", dest);
	free(dest);
	return (0);
}*/
