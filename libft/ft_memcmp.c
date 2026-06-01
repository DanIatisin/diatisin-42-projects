#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    i = 0;
    str1 = s1;
    str2 = s2;
    if(n == 0)
        return (0);
    while (s1[i] == s2[i] && i < n)
        i++;
    if(i == n)
        return (0);
    return(s1[i] - s2[i])
}