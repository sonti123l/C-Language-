#include <stdio.h>

int main()
{

    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (((number) & (1 << 3)))
    {
        number &= ~(1 << 3);
        printf("cleared the bit: %d", number);
    }
    else
    {
        number |= (1 << 3);
        printf("done with setting the bit: %d", number);
    }
    return 0;
}
