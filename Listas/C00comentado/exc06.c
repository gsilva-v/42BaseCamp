#include <unistd.h>

void 	ft_putchar ( char c)
{
	write( 1 , & c, 1 );
}

void 	ft_print_comb ( void )
{
	int 		i;
	int 		k;

	i = 0 ;
	k = 0 ;
	while(i < 100 )
	{
		k = i + 1 ;
		while(k < 100 )
		{
			ft_putchar (i / 10 + 48); /*ao dividir um número por 10, obtemos 
			uma dizima, que ao somar a um número da tabela ascii demonstra 
			um representante igual.
			*/
			ft_putchar (i % 10 + 48);
			ft_putchar (' ');
			ft_putchar (k / 10 + 48);
			ft_putchar (k % 10 + 48);
			if ((i / 10 != 9) || (i% 10 != 8 ))
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			k ++;
		}
		i ++;
	}
}
