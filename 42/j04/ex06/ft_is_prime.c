#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int i; // J'initialise un int i;
    int res; // J'initialise un int res;

    i = 2; // Je déclare que i = 2 car 0 et 1 ne sont pas des nombres premiers donc on commence à compter à 2;
    if (nb == 0 || nb == 1) // Si nb strictement égal à 0 ou 1
    {
        return(0); // Je retourne 0;
    }
    printf("i = %d\n", i);
    if (nb < 0) // Si nb est strictement inférieur à 0
    {
        return(0); // Je retourne 0;
    }
    printf("i = %d\n", i);
    while ( i < nb) // TANT que i est strictement inférieur à nb
    {               // {
        res = nb % i;// Je déclare que res est égal à nb modulo i;
        if (res == 0)// Si le résultat de nb modulo i est = à 0 
        {           // (càd qu'entre i et nb, si res = 0, il a donc rencontré un cas de figure où il n'y a pas de reste)
            return(0); // et un nb premier n'est divisible qu'avec 1 ou lui-même, hors avec cette boucle
        }              // on cherche à vérif si il y a un reste à la division nb/i, si c le cas
                       // alors nb est divisible par autre chose, donc il n'est pas premier (c compliké)
                       // alors on retourne 0 (0= nombre non premier)
        i++; // On incrémente 1 à i pour vérifier toutes les opérations entre 2(i) et nb
    }
    printf("i = %d\n", i);
        return(1); // on retourne 1(nombre = premier) car après avoir vérif qu'une opération n'a de reste
                   // on peut affirmer que nb n'est divisible que par 1 ou lui-même, il est donc premier

}

int main()
{
    int num;

    num = ft_is_prime(0);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(1);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    num = ft_is_prime(2);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);
    num = ft_is_prime(3);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);
    num = ft_is_prime(9);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    
    num = ft_is_prime(25);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(3);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);

    num = ft_is_prime(-42);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(16);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    num = ft_is_prime(550136);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    num = ft_is_prime(257);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);
}        

/*J'initialise un int i;
J'initialise un int res;

Je déclare que i = 2 car 0 et 1 ne sont pas des nombres premiers;
Je déclare que res = nombre modulo i car je veux déterminer si il y aura un reste à une division;
Par ex pour nombre 3:

Si ( 3 == 0 ou 3 == 1)
{Je retourne 0} (0 = Nombre pas premier)

Tant que (i est strictement inférieur à 3/2)
{J'incrémente i}
Si (res est différent de 0 ou Res est différent de nb)
{Je retourne 0 (pas premier si il y a un reste à la division)}
Autrement
{Je retourne 1 (nb n'est divisible que par lui même ou 1)}

Je veux modulo mon nombre passé en argument de 2 jusqu'à lui-même
 et si j'ai un modulo = 0 ça veut dire que le nombre n'est pas prime à 100% de certitude*/