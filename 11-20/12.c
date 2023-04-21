// program to input an integer number and check if the last digit of the number is even or odd

#include <stdio.h>

int main()
{
    int a;
    int rem;
    printf("Enter a digit: ");
    scanf("%d", &a);

    rem = a % 10;

    if (rem % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}