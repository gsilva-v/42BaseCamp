
#include <stdio.h>

int main(void)
{
	int x, y, operacao, resp;
	do
	{
		printf("Digite x: ");
	scanf("%d", &x);
	printf("Digite y: ");
	scanf("%d", &y);		
	printf("Qual operação deseja fazer? \n1 para somar\n2 para subtrair\n3 para dividir\n4 para multiplicar\nDigite aqui: ");
	scanf("%d", &operacao);	
		if (operacao >= 5){	
			do
			{
				printf("Opção inválida, tente novamente: ");
				scanf("%d", &operacao);
			}while(operacao >= 5);
		}	
		if (operacao == 1)
		{
			printf("%d + %d = %d\n", x, y, x+y);
		}else if (operacao == 2)
		{
			printf("%d - %d = %d\n", x, y, x-y);
		}
		else if (operacao == 3)
		{
			printf("%d / %d = %d\n", x, y, x/y);
		}
		else if (operacao == 4)
		{
			printf("%d x %d = %d\n", x, y, x*y);
		}
		printf("Deseja fazer outra conta? \n[1 para SIM]\n[2 para NÃO]\n");
		scanf("%d", &resp);
	}while (resp == 1);
}