#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}
// 789
void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    
    a = 48;
    while (a < 56)
    {
        b = 49;
        while (b < 57)
        {
            c = 50;
            while (c < 58)
            {
                if (a != b && b != c)
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(c);
                    if (a == 55 && b == 56 && c == 57)
                    {
                        ft_putchar('\n');
                    }
                    else
                    {
                        ft_putchar(',');
                    }
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
    ft_print_comb();
    return 0;
}