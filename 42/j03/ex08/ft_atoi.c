#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int     ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] != '\0')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;

}
int main()
{
    char str[] = "123456";
    
}
