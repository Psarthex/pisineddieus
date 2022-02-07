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
        i++;
    }
}

int main()
{
    char s1[] = "i love my big sweatlord";
    char s2[] = "uwu sweatlord kun";
    printf("%s\n", ft_strstr(s1, s2));
    char s1[] = "i love my big sweatlord";
    char s2[] = "huge cock";
    printf("%s\n", ft_strstr(s1, s2));
    char s1[] = "i love my big sweatlord";
    char s2[] = "love";
    printf("%s\n", ft_strstr(s1, s2));
    char s1[] = "i love my big sweatlord";
    char s2[] = "cringe";
    printf("%s\n", ft_strstr(s1, s2));
    char s1[] = "i love my big sweatlord";
    char s2[] = "cringelord";
    printf("%s\n", ft_strstr(s1, s2));
    return(0);
}