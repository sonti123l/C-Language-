#include <stdio.h>

int main()
{

    int bit_manipulation_number;

    printf("Enter the number: ");
    scanf("%d", &bit_manipulation_number);

    if ((bit_manipulation_number) & (1 << 7))
    {
        printf("msb is set: %d is 1", bit_manipulation_number);
    }
    else
    {
        printf("msb is set: %d is 0", bit_manipulation_number);
    }
    return 0;
}