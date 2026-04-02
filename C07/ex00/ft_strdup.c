#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 92d0a18f141c1f4ca79513037fc7c92500af7937
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
<<<<<<< HEAD
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

=======
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	src_len;
	char	*dest;

	i = 0;
	src_len = ft_strlen(src);
	dest = malloc(sizeof(char) * src_len);
	if(dest == NULL)
		return (NULL);
>>>>>>> 92d0a18f141c1f4ca79513037fc7c92500af7937
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
<<<<<<< HEAD

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
=======
>>>>>>> 92d0a18f141c1f4ca79513037fc7c92500af7937
