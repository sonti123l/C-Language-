#include <stdio.h>
#define BITS sizeof(int) * 8

int main()
{

    int number, bit_pos_no, result;

    printf("enter the number: ");

    scanf("%d", &number);

    printf("Enter the bit position: ");

    scanf("%d", &bit_pos_no);

    result = (number >>  bit_pos_no) & (1 << BITS - 1);

    printf("Got the bit in the position %d for number %d is bit %d", bit_pos_no, number, result);

    return 0;
}