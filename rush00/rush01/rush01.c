#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	lin;

	lin = 1;
	while (lin <= y)
	{	
		col = 1;
		while (col <= x)
		{
			if (lin == 1 && col == 1 )
				ft_putchar('/');
			else if(col != 1 && lin != 1 && lin == y && col == x)
				ft_putchar('/');
			else if ((lin == 1 && col == x) || (lin == y && col == 1))
				ft_putchar ('\\');
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
