#include <stdio.h>
#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;   
}

int main()
{
    int nbr;

    nbr = 0;
    printf("%d\n",nbr);
    ft_ft(&nbr);
    printf("%d\n",nbr);
    return (0);
}