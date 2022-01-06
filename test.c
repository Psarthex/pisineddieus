#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 26);
}



int     main()
{
    ft_putchar('abcdefghijklmnopqrstuvwyz');
    return (0);
}