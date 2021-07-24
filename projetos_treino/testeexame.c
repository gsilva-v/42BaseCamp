#include <unistd.h>
void	ft_countdown(void)
{
	int	cont;

	cont = '9';
	while (cont >= '0' )
	{
		write (1, &cont, 1);
		cont--;
	}
	write(1, "$\n", 3);
}
