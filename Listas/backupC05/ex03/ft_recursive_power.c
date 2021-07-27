int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power > 1)
		return (n * ft_recursive_power(n, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (n);
}
