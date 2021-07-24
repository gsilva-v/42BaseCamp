
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int	ft_issalpha(char c)
{
			if ((c >= 97 && c <= 122) || (c >= 65 && c<= 90))
		{
			return (1);
		}
		return(0);
}
int    ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_issalpha(str[i])))
			return(0);
		i++;
	}
    return (1);    
}
void    ft_putstr(char *str)
{
    int    i;

    i = 0;
    while (*(str + i))
        i++;
    write(1, str, i);
}


int     main(void)
{
    char    r[] = "a12d";
    
    if ((ft_str_is_alpha(r)) == 1)
        ft_putstr("1\n");
    else                                
        ft_putstr("0\n");
    return (0);
}