// print sum of first and last digit of given number

#include <stdio.h>

int main()
{
    int num, sum = 0;
    int first, last;

    printf("Digit: ");
    scanf("%d", &num);

    last = num % 10;
    first = num;

    while (num >= 10)
    {
        num = num / 10;
    }
    first = num;

    sum = first + last;
    printf("Sum of first and last digit is %d\n", sum);

    return 0;
}