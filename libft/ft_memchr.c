#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = s;
	i = 0;
	while (n > 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s[i] + i));
		n--;
		i++;
	}
	return (NULL);
}
