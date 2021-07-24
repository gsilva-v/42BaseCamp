#include<unistd.h>

void 	ft_putchar(char c)
{
	write( 1 , &c, 1 );
}

void 	ft_putnbr (int nb)
{
	long	n;

	n = nb;
	if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
	else if (nb < 0 )// caso seja um número negativo, sera printado um -
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10 )// caso seja um numero menor que 10, sera feita a converção pela tabela ascii
		ft_putchar (nb + '0' );
	else 
	/* caso seja um número maior que 10, sera printado sua divisão por 10,
	que mostrará seu primeiro digito, e caso aja resto de divisão, será printa como os digitos restantes
	*/ 
	{
		ft_putnbr (nb / 10 );
		ft_putnbr (nb % 10 );
	}
}