#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * ((s1_len + s2_len) + 1));
	if(!result)
		return (NULL);
	i = 0;
	j = 0;
	while(s1[i])
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while(s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return(result);
}
