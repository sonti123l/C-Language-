#include <stdio.h>
#include <string.h>

int sum_calculation(int number)
{

    char number_string[20];
    int first_result_sum = 0;
    snprintf(number_string, sizeof(number_string), "%d", number);

    for (int i = 0; i < strlen(number_string); i++)
    {
        first_result_sum += number_string[i] - '0';
    }

    return first_result_sum;
}

int main()
{
    int number;
    int result;

    scanf("%d", &number);

    result = sum_calculation(number);

    while (result >= 10)
    {
        result = sum_calculation(result);
    }

    printf("End result: %d\n", result);

    return 0;
}
