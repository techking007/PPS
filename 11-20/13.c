// program to find the factorial of a given number

#include <stdio.h>

int main()
{

    int t = 1;
    int a;
    unsigned int factorial;

    printf("Enter an Integer: ");
    scanf("%d", &a);

    if (a > 0)
    {

        while (t != a)
        {
            factorial = a * t;
            t++;
        }
        printf("Factorial is %d\n", factorial);
    }

    return 0;
}