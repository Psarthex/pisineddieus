#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int     ft_atoi(char *str)
{
    int i; // Initie le compteur i
    int res; // Initie le résultat
    int sign; // Initie le signe devant le nombre/chiffre

    i = 0;
    res = 0;
    sign = 1; // Initie le signe comme positif
    if (str[i] == '-') // exception pour passer en negatif si besoin
    {
        sign = -1; // changement de signe
        i++; // incrémentation de i pour check tous les digits 
    } 
    if (str[i] < '0' || str[i] > '9') // exception pour rennvoyer zero en cas de char non digit
    {
        return(0);
    }
    while (str[i] >= '0' && str[i] <= '9') // à la base str[i] != '\0' mais pk pas besoin ?
    {                                      // pendant que stri est compris entre 0 et 9
        res = res * 10 + str[i] - '0';
        i++;
    }
        return (sign*res); // on retourne le resultat multiplié par le signe

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


// https://www.youtube.com/watch?v=QyDE7cPycnU
// https://puu.sh/IGnkC/7f51d2f7da.png
// https://www.geeksforgeeks.org/write-your-own-atoi/