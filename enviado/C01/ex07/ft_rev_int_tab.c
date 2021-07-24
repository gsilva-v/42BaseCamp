#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;

	i = 0;
	while (i != size / 2)
	{
		store = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = store;
		i++;
	}
}
