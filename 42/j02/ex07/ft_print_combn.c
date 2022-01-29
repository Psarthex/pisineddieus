#include <unistd.h>
#include <stdio.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_combn(int n)
{   
   if (n > 0 && n < 10)
}

int     main()
{
    ft_print_combn(2);
    return(0);
}