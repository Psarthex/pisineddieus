#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
     write(1, &c, 1);
     return(0)
}

void ft_print_alphabet(void)
{
    int i;
    int n;
    char c;

    i = 0;
    while (i < n)
    {
        ft_putchar(c);
        i = i +1;
    }

} 



int     main()
{
    ft_print_alphabet();

    return (0);
}