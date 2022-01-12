#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{   
    int tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}

int main()
{
    int a;
    int b;

    a = 12;
    b = 8;
    printf("test1 : a = 12, b = 8\n");
    ft_ultimate_div_mod(&a, &b);
    a == 1 && b == 4
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\ta: '%d', expected : '1'\n\tb: '%d', expected: '4'\n", a, b);
    
    a = 42;
    b = 5;
    printf("test2 : a = 42, b = 5\n");
    ft_ultimate_div_mod(&a, &b);
    a == 8 && b == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\ta: '%d', expected : '8'\n\tb: '%d', expected: '2'\n", a, b);
}