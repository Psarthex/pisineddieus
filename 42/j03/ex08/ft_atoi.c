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
    int num;
    int atoiresult;

    num = ft_atoi("42");
    atoiresult = atoi("42");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("-42");
    atoiresult = atoi("-42");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("0");
    atoiresult = atoi("0");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);
        
    num = ft_atoi("coucou17");
    atoiresult = atoi("coucou17");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("17coucou");
    atoiresult = atoi("17coucou");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);
}
