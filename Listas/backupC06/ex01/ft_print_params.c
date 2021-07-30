#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	s;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{	
			s = 0;
			while (argv[i][s])
				ft_putchar(argv[i][s++]);
			ft_putchar('\n');
			i++;
		}
	}
}
