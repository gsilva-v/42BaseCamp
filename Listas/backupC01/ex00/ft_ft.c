#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;//aloca dentro da memória o int 42
}

void ft_ft(int *nbr);

int	main(void)
{
	int *nbr;
	int a;

	nbr = &a;
	ft_ft(nbr);

	printf("Main Memória: %p\n", nbr);
	printf("Valor main: %d\n", *nbr);
}
