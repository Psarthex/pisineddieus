#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void ft_print_comb(void)
{
    int a;
    int b;

    a = -1;
    while (a++ < 98)
    {
        b = a;
        while (b++ < 99)
        {
            ft_putchar('0' + (a / 10));
            ft_putchar('0' + (a % 10));
            ft_putchar(' ');
            ft_putchar('0' + (b / 10));
            ft_putchar('0' + (b % 10));
            if (a != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}
//    char a;
//   char b;
//   char c;
//   char d;

//   a = '0';
//   b = '0';
//   c = '0';
//   d = b + 1;
//   while (a <= '9')
//   {
//       while (b <= '9')
//       {
//           while (c <= '9')
//           {
//               while (d <= '9')
//               {
//                   ft_putchar(a);
//                   ft_putchar(b);
//                   ft_putchar(' ');
//                   ft_putchar(c);
//                   ft_putchar(d);
//                   if (a == '9' && b == '8' && c == '9' && d == '9')
//                       return;
//                   ft_putchar(',');
//                   ft_putchar(' ');
//                   d++;
//
//               }
//               c++;
//               d = b + 1;
//          }
//           b++;
//           c = b + 1;
//           d = c + 1;
//       }
//       a++;
//       b = a + 1;
//       c = b + 1;
//       d = c + 1;
// }
// }

int main()
{
    ft_print_comb();
    return (0);
}