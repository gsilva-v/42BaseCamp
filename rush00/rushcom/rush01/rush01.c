#include <unistd.h>
void	ft_putchar(char c);//chama a função externa ft_putchar

void	rush(int x, int y)// declaração da função
{
	int	col;
	int	lin;

	lin = 1;
	while (lin <= y)
	{	
		col = 1;//Declaramos col = 1 para 'resetar' a contagem da largura após o fim do loop e voltar a col 1 
		while (col <= x)
		{
			if (lin == 1 && col == 1 )
				ft_putchar('/');
			else if(col != 1 && lin != 1 && lin == y && col == x)
				ft_putchar('/');
			/*
			se o numero da col e da lin forem 1 ou col e lin forem diferentes de 1 porem iguais a x e y,
			de 1 porem iguais a x e y, sera escrito a '/'
			*/
			else if ((lin == 1 && col == x) || (lin == y && col == 1))
				ft_putchar ('\\');
			/* 
			coloca a '\' no caractere da posição de valor x=col e lin=1 ou
			y=lin e col=1 
			*/
			else if (col == 1 || col == x || lin == 1 || lin == y)
				ft_putchar('*');
				
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}	
}
