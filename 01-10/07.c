// Write a program to read three numbers from the keyboard and find out the maximum out of these three

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b)
    {
        if (a >= c)
            printf("%d is the largest number\n", a);
        else
            printf("%d is the largest number\n", c);
    }
    else
    {
        if (b >= c)
            printf("%d is the largest number\n", b);
        else
            printf("%d is the largest number\n", c);
    }

    return 0;
}