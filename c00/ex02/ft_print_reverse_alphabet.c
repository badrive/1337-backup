#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int i = 123;
    while (--i >= 97)
    {
        write(1,&i,1);
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
