void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a;
	a = 15;

	int	b;
	b = 2;
	
	int result_div;
	int result_mod;
	int *div = &result_div;
	int *mod = &result_mod;
	ft_div_mod(a, b, div, mod);
	return 0;
}*/
