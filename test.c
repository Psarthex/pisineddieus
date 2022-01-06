#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c)
{
     write(1, &c, 1);
}

void ft_print_alphabet(char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ft_putchar(c);
        i = i +1;
    }

} 



int     main()
{
    ft_print_alphabet('a', 26);
    ft_putchar('\n');

    return (0);
}