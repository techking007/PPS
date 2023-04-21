// find sum and average of given n numbers from users

#include <stdio.h>

int main()
{

    int n;
    float avg;
    int sum = 0;
    int t, total_number;

    printf("Enter number of inputs: ");
    scanf("%d", &t);
    total_number = t;

    while (t != 0)
    {
        scanf("%d", &n);
        sum = (float)sum + n;
        --t;
    }
    avg = sum / total_number;
    printf("Sum     : %d\n", sum);
    printf("Average : %.2f\n", avg);

    return 0;
}
