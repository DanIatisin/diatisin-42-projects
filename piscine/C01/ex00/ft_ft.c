void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main()
{
	int	n;
	n = 0;

	int	*ptr = &n;
	ft_ft(ptr);
	return 0;
}
