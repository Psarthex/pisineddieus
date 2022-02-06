#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int size;

    size = 0;
    while( size < n && src[size] != '\0')
    {
        dest[size] = src[size];
        size++;
    }
    // dest[size] = '\0';
    return(dest);
}

int main()
{
    char s1[] = "123456";
    char s2[] = "789123456";
    printf("%s\n", ft_strncpy(s1, s2, 6));
    return (0);
}