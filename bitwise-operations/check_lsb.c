// check for the most significant bit for the least significant bit
#include <stdio.h>

int main()
{

    int bit_number;

    printf("Enter the number: ");
    scanf("%d", &bit_number);

    if ((bit_number) & (1))
    {
        printf("Least significant bit is set: %d is 1", bit_number);
    }
    else
    {
        printf("Least significant bit is not set: %d is 0", bit_number);
    }

    return 0;
}