#include <stdio.h>
int ft_find_next_prime(int nb)
{
    int i = 2;
    int res;


    if (nb <= 2)
    {
        return(2);
    }
    while (i < nb)
    {
        res = nb % i;
        if (res >= 0)
        {
            i++;
        }
        if (res == 0)
        {
            i = 2;
            nb++;
        }
    }
    return(nb);
}

int main()
{
    int num;

    num = ft_find_next_prime(0);
    num == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '2'\n", num);

    num = ft_find_next_prime(1);
    num == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '2'\n", num);
    num = ft_find_next_prime(2);
    num == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '2'\n", num);
    num = ft_find_next_prime(3);
    num == 3
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '3'\n", num);
    num = ft_find_next_prime(9);
    num == 11
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '11'\n", num);

    num = ft_find_next_prime(25);
    num == 29
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '29'\n", num);

    num = ft_find_next_prime(3);
    num == 3
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '3'\n", num);

    num = ft_find_next_prime(-42);
    num == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '2'\n", num);

    num = ft_find_next_prime(16);
    num == 17
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '17'\n", num);
    num = ft_find_next_prime(550136);
    num == 550139
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '550139'\n", num);
    num = ft_find_next_prime(257);
    num == 257
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '257'\n", num);
}