#include <unistd.h>
#include <stdio.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_putnbr(int nb)
{   
    if  (nb > 2147483647)
        return;

    if (nb <= -2147483648)
    {
        nb = 147483648;
        ft_putchar('-');
        ft_putchar('2');
        ft_putchar(nb);
    }

    if (nb >= 0 && nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else if (nb < 0)
    {   ft_putchar('-');
        ft_putnbr(nb * (-1));
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int     main()
{
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-42);
    ft_putchar('\n');
    return(0);
}