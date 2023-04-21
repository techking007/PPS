// program to find out the Maximum and Minimum number from given 10 numbers

#include <stdio.h>

int main()
{
    int a;
    int sum = 0;
    int t = 10;

    while (t != 0)
    {
        scanf("%d", &a);

        if (a >= sum)
            sum = a;
        --t;
    }

    printf("The largest number is %d.\n", sum);
    return 0;
}