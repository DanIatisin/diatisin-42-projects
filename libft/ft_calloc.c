#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void *ptr;

	sum = nmemb * size;
	ptr = (void *)malloc(sum);
	if(!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
