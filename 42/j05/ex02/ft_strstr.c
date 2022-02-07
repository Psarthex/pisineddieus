#include <unistd.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        while(str[i] == to_find[j])
        {
            j++;
            if (str[i] != to_find[j])
            {
                return (&str[i]);
            }
            i = 0;
        }
        i++;
    }
    return (&str[i]);
}

int main()
{
    char s1[] = "i love my big sweatlord";
    char s2[] = "uwu sweatlord kun";
    printf("ex1: %s\n", ft_strstr(s1, s2));
    char s3[] = "i love my big sweatlord";
    char s4[] = "huge cock";
    printf("ex2: %s\n", ft_strstr(s3, s4));
    char s5[] = "i love my big sweatlord";
    char s6[] = "love";
    printf("ex3: %s\n", ft_strstr(s5, s6));
    char s7[] = "i love my big sweatlord";
    char s8[] = "cringe";
    printf("ex4: %s\n", ft_strstr(s7, s8));
    char s9[] = "i love my big sweatlord";
    char s10[] = "cringelord";
    printf("ex5: %s\n", ft_strstr(s9, s10));
    char s11[] = "i love my big sweatlord";
    char s12[] = "drol";
    printf("ex6: %s\n", ft_strstr(s11, s12));
    return(0);
}