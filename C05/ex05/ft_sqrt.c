#include<stdio.h>
int	ft_sqrt(int nb)
{
	int	num;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb > 2147395600)
		return (0);
	num = 2;
	while ((num * num) < nb){
		if((num * num) == nb)
			return (num);
		num++;
	}
	return (0);
}
