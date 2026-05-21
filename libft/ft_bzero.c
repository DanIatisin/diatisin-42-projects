/*#include <stdio.h>*/
void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr = s;
	size_t	i;

	i = 0;
	while(i < n)
	{
		ptr[i] =  0;
		i++;
	}
}

/*int main()
{
	size_t i;
	char str[10] = "zzssaeer12";
	
	ft_bzero(str, 5);
	i = 0;
	 while (i < 10)
    {
        printf("str[%zu] = %d\n", i, (unsigned char)str[i]);
        i++;
    }
	return (0);
}*/
