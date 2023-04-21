// Program to calculate simple interest

#include <stdio.h>

int main()
{
    float r, i;
    int n, p;

    printf("Enter the value of Principal, Interest Rate and Months in sequence: ");
    scanf("%d%f%d", &p, &r, &n);

    i = (p * n * r) / 100;
    printf("Interest is %.2f\n", i);

    return 0;
}
