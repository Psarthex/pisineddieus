#include <unistd.h>
#include <stdio.h>

int     ft_sqrt(int nb)
{   
    int i;                   // Je déclare un int i qui me sert de compteur et qui représente "un multiple"

    i = 1;                   // i = 1 car on veut multiplier plus tard
    if (nb == 0 || nb == 1) // racine carrée de 0 = 0 | racine carrée de 1 = 1
    {
        return(nb);
    }
    if (nb < 0)              // si nb négatif
    {
        return(0);            // retourne 0
    }

    while(i * i < nb)         // tant que multiple * multiple est inf à nb
    {
        i++;                // multiple +1 jusqu'à ce que multiple = nb
    } 
                // On sort de la boucle quand i*i n'est plus strictement inf à nb
    if (i * i == nb)        // On vérifie avec cette nouvelle valeur de i si i * i = nb
    {
        return(i);          // si c'est le cas on retourne la valeur i
    }

    else                // Autrement
    {
        return(0); // Si oui, on retourne 0 et on sort de ce merdier
    }
  //hors sujet: (i * i != nb) Sinon on vérifie si i*i est différent de nb
}

int main()
{
    int num;

    num = ft_sqrt(0);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_sqrt(1);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);

    num = ft_sqrt(9);
    num == 3
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '3'\n", num);
    
    num = ft_sqrt(25);
    num == 5
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '5'\n", num);

    num = ft_sqrt(3);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_sqrt(-42);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_sqrt(16);
    num == 4
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '4'\n", num);
    num = ft_sqrt(550183936);
    num == 23456
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '23456'\n", num);
}


// https://ourcodeworld.com/articles/read/884/how-to-get-the-square-root-of-a-number-without-using-the-sqrt-function-in-c