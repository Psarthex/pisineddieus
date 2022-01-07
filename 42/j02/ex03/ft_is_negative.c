#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_is_negative(int n)
{
    int i;

    i = 0;
    if (n >= i)
        {
            ft_putchar('P');
        }
    else
        {
            ft_putchar('N');
        }
}

int     main()
{
    ft_is_negative(-1);
    return (0);
}