#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_print_alphabet(void) {
    int i = 96;
    while (++i <= 122)
    {
        write(1,&i,1);
    }   
}

int main() {
    
    ft_print_alphabet();
    return 0;
}