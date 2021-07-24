
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0' - 1; //Para que o primeiro caractere seja 0, precisamos começar com o first = -1
	while (++first <= '7')
	{
		second = first;// Para que o segundo caractere seja 1, second = o valor de first e assim que entra no loop recebe +1
		while (++second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				third++;
			}
		}
	}
}
