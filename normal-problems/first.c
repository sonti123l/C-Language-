#include <stdio.h>

int main()
{

    int a;
    char b;
    float c;
    int sum, sub, multiply, divide, modules;

    a = 10;
    b = 'A';
    c = 2.5;
    printf("%d\n", a);
    printf("%c\n", b);
    printf("%f\n", c);

    sum = a + b + c;
    sub = (a + b) - c;
    multiply = a * b * c;
    divide = (a * b) / c;
    modules = (a * b) % (int)c;

    printf("sum : %d\n", sum);
    printf("sub : %d\n", sub);
    printf("multiply : %d\n", multiply);
    printf("divide : %d\n", divide);
    printf("modules : %d\n", modules);

    printf("size of integer: %zu\n", sizeof(int));
    printf("size of character: %zu\n", sizeof(char));
    printf("size of float: %zu\n", sizeof(float));

    printf("%s",
           (a % 2) == 0 ? "even" : "odd");

    return 0;
}