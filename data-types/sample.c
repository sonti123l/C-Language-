#include <stdio.h>
#include <conio.h>

void main()
{

    int size_of_array;
    int array_elements[size_of_array];
    int stack_array[size_of_array];
    int select_an_option;
    int deleting_index;

    printf("Enter array size: ");

    scanf("%d", &size_of_array);

    if (size_of_array > 0)
    {
        for (int index = 0; index < size_of_array - 1; index++)
        {
            // push the array elements from console
            scanf("%d", &array_elements[index]);
        }
    }

    printf("Enter the option 1.push 2.pop \n");
    scanf("Enter the number %d", &select_an_option);

    switch (select_an_option)
    {

    case 1:
        push(stack_array, size_of_array);
        break;
    case 2:
        printf("Enter an index to remove element:\n");
        scanf("%d", &deleting_index);
        if (stack_array[deleting_index] != NULL)
        {
            pop(deleting_index, stack_array);
        }
        break;

    default:
        break;
    }
}

void push(int stack_array[], int size_of_stack)
{

    if (stack_array[0] != NULL)
    {
    }
}

void pop(int index_to_remove, int stack_array)
{
}