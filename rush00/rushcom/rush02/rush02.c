#include <unistd.h>
void    ft_putchar(char c);

void    rush(int x, int y)
{
    int    col;
    int    lin;

    lin = 1;
    while (lin <= y)
    {
        col = 1;
        while (col <= x)
        {
            if ((col == 1 && lin == 1) || (col == x && lin == 1))    //Primeira lin e col são preenchidos, primeira lin e ultima col
                ft_putchar('A');
            else if ((col == 1 && lin == y) || (col == x && lin == y)) //Primeira col da última lin, ultima lin e ultima col
                ft_putchar('C');
            else if (col == 1 || col == x || lin == 1 || lin == y) //Primeira col, ou ultima col, primeira lin, ou ultima lin !!Após rodar os if acima
                ft_putchar ('B');
            else
                ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        lin++;
    }
}