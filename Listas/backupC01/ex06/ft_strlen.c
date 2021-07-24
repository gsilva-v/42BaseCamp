#include<unistd.h>
#include <stdio.h>
int ft_strlen(char *str); 


int main(void)
{
	char *str;
	int n;
	str = "teste";
	n = ft_strlen(str);
	printf("Tamanho  = %d\n", n);
}

int ft_strlen(char *str)
{
	int	x;

	x = 0;
	while(str[x]!='\0')//significa o fim da cadeia de caracteres(string)
		x++;
	return(x);
}

void  ft_putchar(char *str)
{
  write(1, &str, 1);
}