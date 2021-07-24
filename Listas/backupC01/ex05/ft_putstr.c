#include <unistd.h>

void	ft_putstr(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);//ira escrever o caractere na posição do contador
		// 'a', e a cada ciclo o contador recebe mais um, ate que acabe a frase
		a++;
	}
}


