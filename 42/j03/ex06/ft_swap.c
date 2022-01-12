#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}

int main()
{
    int a;
    int b;

    a = 42;
    b = 21;
    ft_swap(&a, &b);
    printf("test1 : a = 42, b = 21\n");
    a == 21 && b == 42
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\ta: '%d', expected: '21'\n\tb:'%d', expected: '42'\n", a, b);

    a = 101;
    b = 202;
    ft_swap(&a, &b);
    printf("test2 : a = 101, b = 202\n");
    a == 202 && b == 101
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\ta: '%d', expected: '202'\n\tb:'%d', expected: '101'\n", a, b);
}