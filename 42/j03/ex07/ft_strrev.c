#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

char *ft_strrev(char *str)
{
    int i;     // je déclare un compteur i
    int len;   // je déclare une longueur len
    char temp; // je déclare un tampon temp pour pouvoir swap la chaîne de caract

    i = 0;
    len = 0;
    while (str[len] != '\0') // si str[len] est différent du dernier caract de la chaîne
    {
        len++;
    } // len est maintenant \0
    printf("nb : %d\n", len);
    len--; // len est maintenant le caractère avant \0
    printf("nb : %d\n", len);
    while (len > i) // tant que la longueur est supérieure au compteur
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
        i++;
    }
    return (str);
}

void main()
{
    char str[27];
    char *res;
    int i;

    str[0] = 'a';
    i = 1;
    while (str[i - 1] != 'z')
    {
        str[i] = str[i - 1] + 1;
        i++;
    }
    str[i] = 0;

    printf("%s\n", str);
    res = ft_strrev(str);
    printf("%s\n", res);
}

// https://puu.sh/IGl7f/5ea8a0319f.png
// https://puu.sh/IGlaM/b0bdd1021b.png