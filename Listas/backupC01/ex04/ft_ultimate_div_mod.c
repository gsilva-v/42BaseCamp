#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{
	int *a;
	int *b;
	int c = 18;
	int d = 4;

	a = &c;//o & mostra o endereço na memória da variavel
	b = &d;

	printf("O endereço do a é: %p\n", a);
	printf("O valor do a é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de b é: %d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("O endereço do a é: %p\n", a);
	printf("O valor do a / b é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de a mod b é: %d\n", *b);

}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;//variavel que ira armazenar o resultado da divisão
	int	mod;//variavel que ira armazenar o resto da divisão

	div = *a / *b;//realiza a conta entre os valores que serão passados no main que resultara no na divisão
	mod = *a % *b;//realiza a divisao e armazena  o resto na variavel
	*a = div;//define que *a aponta para a divisão
	*b = mod;//define que *b aponta para o resto da divisão
}