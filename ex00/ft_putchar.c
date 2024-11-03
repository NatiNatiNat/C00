#include <unistd.h>

// void ft_putchar(char symbol);

void ft_putchar(char symbol)
{
    write(1, &symbol, 1);
    write(1, "\n", 1);
}

int main(void)
{
    char symbol = 'A';
    ft_putchar(symbol);
    return 0;
}