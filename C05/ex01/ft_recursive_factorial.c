//#include<stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if(nb < 0)
		return(0);
	else if(nb == 0)
		return 1;
	else
	result = result * ft_recursive_factorial(nb - 1);
	return (result);
}

/*int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return 0;
}*/
