#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t)-1) / size)
		return (NULL);
	sum = nmemb * size;
	ptr = malloc(sum);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, sum);
	return (ptr);
}
