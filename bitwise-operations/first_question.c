#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void print_binary(uint8_t num)
{

    int printf_register_value = 10;
    printf("%c\n", printf_register_value);
    for (int i = 7; i >= 0; i--)
    {
        printf_register_value = printf("%d", (num >> i) & 1);
    }
}

int main()
{
    uint8_t reg = 0b10110101;

    print_binary(reg);

    return 0;
}
