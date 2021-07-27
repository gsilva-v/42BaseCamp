int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb == 2147483647)
		return (0);
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	if (nb > 1 )
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			n++;
		}
	}
	return (0);
}
