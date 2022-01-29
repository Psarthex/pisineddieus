#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 1;
    res = 1;
    if (nb < 0 || nb > 12)
    {
        return (0);
    }
    else if (nb == 0 || nb == 1)
    {
        return (1);
    }
    while (i <= nb)
    {
        res = i * res;
        i++;
    }
    return (res);
}

int main()
{
    printf("%d\n", ft_iterative_factorial(4));
    printf("%d\n", ft_iterative_factorial(42));
    printf("%d\n", ft_iterative_factorial(-42));
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(1));
    printf("%d\n", ft_iterative_factorial(-1));
    return (0);
}