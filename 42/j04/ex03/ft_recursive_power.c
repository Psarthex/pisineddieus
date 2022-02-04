#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0) 
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    else
        return nb * ft_recursive_power(nb, power - 1);
}

int main()
{
    printf("%d\n", ft_recursive_power(4,4));
    printf("%d\n", ft_recursive_power(-4,3));
    printf("%d\n", ft_recursive_power(4,0));
    printf("%d\n", ft_recursive_power(4,1));
    printf("%d\n", ft_recursive_power(4,-4));
    return (0);
}

// premiere fois qu il passe
//nb = 4 et pow = 4
//4 * ft (4, 3)
//il refait nb * la ft car on est pas arrive a un cas de fin
//qui serait si pow = 1 ou 0
//donc nb bouge pas et power--
//donc ft(4,3) arrive ds le return qui est de faire 4 * ft(4,2)
//donc pr l instant on a
//4 * 4 * ft*(4,2)
//ft(4,2) pareil, on refait une boucle car 2>1
//4 * 4 * 4 * ft(4,1)
//ft (4,1) = 4
//donc on remonte tout l bordel
//donc ca reste 4 * 4 * 4 * 4
//voila meter poce bleu