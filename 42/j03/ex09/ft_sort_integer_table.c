#include <stdio.h>

void ft_sort_integer_tab(int *tab, int size)
{
    return tab;
}

int main()
{
    int tab[10];
    int i;

    i = 0;
    tab[0] = 2;
    tab[1] = 6;
    tab[2] = 3;
    tab[3] = 9;
    tab[4] = 0;
    tab[5] = 1;
    tab[6] = 4;
    tab[7] = 7;
    tab[8] = 5;
    tab[9] = 8;
    ft_sort_integer_tab(tab, 10);
    while (i < 10)
    {
        tab[i] == i
            ? printf("✔️\tCorrect: %d\n", tab[i])
            : printf("❌\tWrong  : %d, expected: %d\n", tab[i], i);
        i++;
    }
}