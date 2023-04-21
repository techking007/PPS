// program to reverse a number

#include <stdio.h>
int main()
{

    int n;
    int rev = 0;
    int rem;

    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("%d\n", rev);
    return 0;
}