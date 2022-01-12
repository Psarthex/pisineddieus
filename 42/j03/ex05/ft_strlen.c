#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    int res;

    res = ft_strlen("slt sava");
    res == 8
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong, yours: '%d', expected : '8'\n", res);
    res = ft_strlen("trankilou bilou");
    res == 15
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong, yours: '%d', expected : '15'\n", res);
}