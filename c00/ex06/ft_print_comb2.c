#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = 48;
    while (a < 58)
    {
        b = 48;
        while (b < 57)
        {
            c = 48;
            while (c < 58)
            {
                d = 49;
                while (d < 58)
                {
                    if (b != d)
                    {
                        ft_putchar(32);
                        ft_putchar(a);
                        ft_putchar(b);
                        ft_putchar(32);
                        ft_putchar(c);
                        ft_putchar(d);
                        if (a == 57 && b == 56 && c == 57 && d == 57)
                        {
                            ft_putchar('$');
                        }
                        else
                        {
                            ft_putchar(',');
                        }
                    }
                   d++; 
                }
               c++;
            }
            b++;
        }
      a++;  
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}