void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{	
	int	num1;
	num1 = 10;
	
	int	num2;
	num2 = 5;

	int	*a = &num1;
	int 	*b = &num2;
	
	printf("%s", "Before: \n");
	printf("%s", "a:");
	printf("%d\n", *a);
	printf("%s", "b:");
	printf("%d\n", *b);
	ft_swap(a, b);
	return 0;
}
*/
