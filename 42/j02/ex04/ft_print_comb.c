#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}
void ft_print_comb(void)
{
    char c;
    char d;
    char e;

    c = '0';
    d = '0';
    e = '0';
    while (c <= '9') 
    {
        while (d <= '9')
        {
            while (e <= '9')
            {
                    ft_putchar(c);
                    ft_putchar(d);
                    ft_putchar(e);
                if (c != '7')
                    ft_putchar(',');
                if (c != '7')
                    ft_putchar(' ');
                e++;
            }
            d++;
            e = d + 1;
        }
        c++;
        d = c + 1;
        e = d + 1;
    }    
}

int     main()
{
    ft_print_comb();
    return(0);
}