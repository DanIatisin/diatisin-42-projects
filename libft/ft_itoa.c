#include "libft.h"

static size_t length(int n, int base)
{
	int len;

	len = 0;
	if(n <= 0)
		++len;
	while(n)
	{
		++len;
		n /= base;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*result;
	const char *digits = "0123456789";
	len = length(n, 10);
	result = malloc(sizeof(char) * (len + 1));
	if(!result)
		return(NULL);
	result[len] = 0;
	if (n == 0)
		result[0] = 0;
	if(n < 0)
		result[0] = '-';
	while(n)
	{
		if(n > 0)
			result[--len] = digits[n % 10];
		else
			result[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (result);
}
