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
    while (a && b != c && d)
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(' ');
        ft_putchar(c);
        ft_putchar(d);
    if (a == '9' && b == '8' && c == '9' && d == '9')
        return;
        ft_putchar(',');
        ft_putchar(' ');
    a++;
    b++;
    c++;
    d++;
}

    int main()
    {
        ft_print_comb();
        return (0);
    }