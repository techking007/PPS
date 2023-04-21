// Write a program to evaluate the series 1^2 + 2^2 + 3^2 + ... + n^2

#include <stdio.h>
int main()
{

    int num, i;
    int term;
    int sum = 0;

    printf("Program to evaluate the series 1^2 + 2^2 + 3^2 + ... + n^2\n");
    printf("Enter number of terms: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        term = i * i;
        sum = sum + term;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
