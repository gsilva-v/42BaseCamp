#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma, subtracao, multi, div;

    printf("Calculadora 1.\n");
    printf("Entre os 2 números a serem processados: ");
    scanf("%i%i", &x, &y);

    soma = x + y;
    subtracao = x - y;
    multi = x * y;
    div = x / y;

    printf( "A soma é: %i\n", soma);
    printf( "A subtração é: %i\n", subtracao);
    printf( "A multiplicação é: %u\n", multi);
    printf( "A divisão é: %i\n", div);

    return 0;

}