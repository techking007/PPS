// program to find that the accepted number is negative or positive or zero.

#include <stdio.h>

int main()
{

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
        printf("Entered number is positive\n");
    else if (a < 0)
        printf("Entered number is negative\n");
    else
        printf("Entered number is zero\n");

    return 0;
}