#include <stdio.h>
void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int c = 13;
	int d = 29;
	
	a = &c;
	b = &d;
	printf("Endereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
	ft_swap(a, b);
	printf("\nEndereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
}

void	ft_swap(int *a, int *b)//declara dois parametros com ponteiros
{
	int	save;//declara uma variavel para salvar os valores

	save = *a;//cria o ponteiro para a variavel
	*a = *b;//cria o ponteiro para o ponteiro da variavel 
	*b = save;//iguala o ponteiro a variavel
}