#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') // while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main()
{
    ft_putstr("Si vous lisez ceci, bha c'est juste loul");
    ft_putstr("\n");
    ft_putstr("coucou");
    ft_putstr("\n");
    return (0);
}