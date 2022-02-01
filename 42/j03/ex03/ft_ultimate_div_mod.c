#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{   
    int tmp = *a; //Je crée tmp pour garder en mémoire la valeur initiale de l'int pointé par a, je lui assigne donc tmp = *a
    *a = *a / *b; //Le résultat de la division est maintenant stockée dans l'int pointé par a (donc *a = 1 ou 8 maintenant)
    *b = tmp % *b;//J'utilise tmp pour faire le modulo avec la valeur initiale de l'int pointé par a (12 ou 42 selon l'ex)
} // Si on ne déclare pas un nouvel int comme tmp; le résultat de la division *a/*b va simplement écraser le *a initiale
// Le résultat serait donc éronné en faisant *b = *a % *b car le *a serait à ce moment là, le resultat de la div *a/*b

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