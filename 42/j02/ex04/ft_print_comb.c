#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 3);
    return(0);
}
void ft_print_comb(void)
{
    int tab[9];
    int size = 789;
    char c;

    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    tab[4] = 4;
    tab[5] = 5;
    tab[6] = 6;
    tab[7] = 7;
    tab[8] = 8;
    tab[9] = 9;
    c = '0';
    while (c <= size)
    {
        ft_putchar(c);
        c++;
        ft_putchar(' ');
    }
}

int     main()
{
    ft_print_comb();
    return(0);
}