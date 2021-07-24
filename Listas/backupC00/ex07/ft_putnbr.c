#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	 if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
	else if (nb < 0 )
	{
		nb = -nb;
		ft_putchar('-');
	}
	else if (nb < 10 )
		ft_putchar (nb + '0' );
	else
	{
		ft_putnbr (nb / 10 );
		ft_putnbr (nb % 10 );
	}
}
