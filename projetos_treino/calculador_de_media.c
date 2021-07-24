#include <stdio.h>

int main(void){
	float num1, num2, media;
	printf("Digite a primeira nota: \n");
	scanf("%f", &num1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &num2);
	media = (num1 + num2) / 2;
	printf("%.2f\n",media);
}