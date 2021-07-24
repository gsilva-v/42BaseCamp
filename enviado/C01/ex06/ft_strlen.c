#include<unistd.h>

void	ft_putchar(char *str)
{
	write(1, &str, 1);
}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}
