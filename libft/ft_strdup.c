#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s);
	ptr = malloc(sizeof(char) * length + 1);
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
