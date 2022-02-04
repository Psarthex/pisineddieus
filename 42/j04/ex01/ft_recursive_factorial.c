#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0 || nb > 12)
    {
        return(0);
    }
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
    else
    {
       return nb * ft_recursive_factorial(nb - 1);
       // Chaque fois que la funct va s'appeler, 
       // le nb du sous ensemble va changer (nb - 1)
       // le paramètre nb sera le res de la * précédente
       // ex: 4  *   4-1  (= 12)
       //     12  *   3-1  (= 24)
       //     24  *   2-1  (= 24)
       // et on return le résultat des multiplications
       // donc 24, on sort de la funct comme
    }
}

int main()
{
    printf("%d\n", ft_recursive_factorial(4));
    printf("%d\n", ft_recursive_factorial(2147483647));
    printf("%d\n", ft_recursive_factorial(-2147483648));
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(1));
    printf("%d\n", ft_recursive_factorial(-1));
    return (0);
}