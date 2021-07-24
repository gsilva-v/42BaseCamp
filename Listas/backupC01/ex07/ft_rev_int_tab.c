#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;

	i = 0;
	while (i != size / 2)
	{
		store = tab[i];
		tab[i] = tab[size - (i + 1)];//pega o primeiro e coloca na ultima posição e vice versa
		tab[size - (i + 1)] = store;
		i++;
	}
}

void    ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[] = {5, -2, 18, 15, 14, 27, -12, 35 , 0 , 10, 10};
    

	printf("Endereço da Tabela Original: %p\n", tab);
	printf("Tabela Original: \n");
	for(int j = 0; j < 11; j++) {
        printf("%d, ", tab[j]);
    }
    printf("\n");

	ft_rev_int_tab(tab, 11);

	printf("\nEndereço da Tabela Modificada: %p\n", tab);
	printf("Tabela Modificada: \n");
	for(int i = 0; i < 11; i++) {
    	printf("%d, ", tab[i]);
	}
}