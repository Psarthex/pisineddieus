#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}
void ft_print_comb(void)
{
   /// int tab[9];
   ///int size = 789;
    char c;
    char d;
    char e;

   /// tab[0] = 0;
   /// tab[1] = 1;
   /// tab[2] = 2;
   /// tab[3] = 3;
   /// tab[4] = 4;
   /// tab[5] = 5;
   /// tab[6] = 6;
   /// tab[7] = 7;
   /// tab[8] = 8;
   /// tab[9] = 9;
    c = '0';
    d = '0';
    e = '0';
   /// while (c <= size)
    while (c <= '9') 
        {
            while (d <= '9')
            {
                while (e <= '9')
                {
                    if(c <= d && d <= e)

                        ft_putchar(c);
                        ft_putchar(d);
                        ft_putchar(e);
                        if (c != '7')
                        ft_putchar(',');
                        if (c != '7')
                        ft_putchar(' ');
                        e++;
                }
                d++;
                e = d + 1;
            }
            c++;
            d = c + 1;
            e = d + 1;
        }
        
    
}

int     main()
{
    ft_print_comb();
    return(0);
}