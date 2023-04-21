// Write a program that works as a calculator.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two values to calculate\n");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);

    return 0;
}
