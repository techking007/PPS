// program to interchange two numbers without third variable

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Before %d %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After %d %d\n", a, b);

    return 0;
}
