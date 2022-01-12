#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void ft_print_comb(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    b = '0';
    c = '0';
    d = '0';
    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(' ');
                    ft_putchar(c);
                    ft_putchar(d);
                    if (a == '1')
                        return;
                    ft_putchar(',');
                    ft_putchar(' ');
                    d++;
                }
                c++;
                d = c - 1;
            }
            b++;
            c = b - 1;
            d = c - 1;
        }
        a++;
        b = a - 1;
        c = b - 1;
        d = c - 1;
    }
}

int main()
{
    ft_print_comb();
    return (0);
}