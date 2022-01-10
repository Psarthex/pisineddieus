#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int div;
    int mod;

    div = 0;
    mod = 0;
    printf("div:%d | mod:%d", div, mod);
    printf("\n");
    ft_div_mod(12, 8, &div, &mod);
    printf("div:%d | mod:%d", div, mod);
    printf("\n");

    return (0);
}