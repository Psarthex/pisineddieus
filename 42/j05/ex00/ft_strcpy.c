#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int size;

    size = 0;
    while(src[size] != '\0')
    {
        dest[size] = src[size];
        size++;
    }
    return(dest);
}

int main()
{
    char s1[] = "hello";
    char s2[] = "fdp grand cru";
    printf("%s\n", ft_strcpy(s1, s2));
    return (0);
}