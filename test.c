#include <unistd.h>

int ft_putchar(char c, int n)
{
    write(1, &c, 1);
    int i;

    i = 0;
    while (i < n)
        {
            ft_putchar(c),
            i = i + 1,
        }
    return (0);
}



int     main()
{
    ft_putchar('abcdefghijklmnopqrstuvwxyz', 26);

    return (0);
}