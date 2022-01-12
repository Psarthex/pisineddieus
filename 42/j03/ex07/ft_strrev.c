#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}


char *ft_strrev(char *str)
{
    int i = 25;

    while (str[i] >= 1)
    {
        ft_putchar(str[i]);
        i--;
    }
    return(str);
}

void main()
{
    char *str;
    str = ft_strrev("abcdefghijklmnopqrstuvwxyz");
    write(1,"\n", 1);
}