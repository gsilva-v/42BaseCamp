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
            if ((col == 1 && lin == 1) || (col == 1 && lin == y))
                ft_putchar('A');
            else if ((col == x && lin == 1) || (col == x && lin == y))
                ft_putchar('C');
            else if (col == 1 || col == x || lin == 1 || lin == y)
                ft_putchar ('B');
            else
                ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        lin++;
    }
}