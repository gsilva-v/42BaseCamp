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

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{	
			s = 0;
			while (argv[i][s])
				ft_putchar(argv[i][s++]);
			ft_putchar('\n');
			i--;
		}
	}
}
