#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}
