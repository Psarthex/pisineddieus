#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int res; // Je déclare res (resultat que je retournerai)
    int exp; // Je déclare exp (exposant, comme un compteur (i))

    exp = 1; // Exp commence à 1 (puissance 1)
    res = 1; // Res est égal à 1 parce que si je met 0 ça marche pas wallah jsp pk
    if (power < 0) // si la puissance est inf à 0
    {
        return (0); // on renvoit 0
    }
    else if (power == 0) // sinon si power = 0
    {
        return (1); // on retourne 1 (par convention mathématique)
    }
    while (exp <= power)//pendant que l'exposant(compteur) est inf au parametre power
    {
        res = res * nb;//donc pour mon premier exemple:
        //res = 1 * 4 au premier passage, puis 4*4 donc 16, puis 16*4 donc 64, 64*4=256
        // 4 multiplications, 4 passages dans la boucle
        exp++; // je rajoute 1 au compteur jusqu'à ce que exp = power

    }
    return (res); // res = 256, exp = 4 et donc exp = power, on return res
}

int main()
{
    printf("%d\n", ft_iterative_power(4,4));
    printf("%d\n", ft_iterative_power(-4,3));
    printf("%d\n", ft_iterative_power(4,0));
    printf("%d\n", ft_iterative_power(4,1));
    printf("%d\n", ft_iterative_power(4,-4));
    printf("%d\n", ft_iterative_power(4,-4));
    return (0);
}