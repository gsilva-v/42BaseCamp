#include <stdio.h>

int main(void)
{
	char nome[30], prob[100], resp1[100];
	int resp;

	printf("Olá, qual o seu nome?\n");
	scanf("%s", &nome);
	printf("Tudo bem, %s?\n[1 para sim]\n[2 para não]\n", nome);
	scanf("%d", &resp);
		if (resp == 1)
		{
			printf("Fico feliz por você, %s!\n", nome);
		}else if (resp == 2)
		{
			printf("Estou aqui se precisar conversar. Me diga, qual o problema?\n");
			scanf("%s", &prob);
			printf("Entendo, vamos conversar pra você tirar essas coisa da sua cabeça");
		}
	printf("Como foi seu dia? \n");
	scanf("%s", &resp1);
	printf("Que legal!!");
	printf("Me conte mais sobre você\n");
	scanf("%s");
}