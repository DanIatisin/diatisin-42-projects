#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
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
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
