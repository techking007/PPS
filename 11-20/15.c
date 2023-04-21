// program to generate fibonacci series

#include <stdio.h>

int main()
{

    int step, i;
    int n1 = 0;
    int n2 = 1;
    int temp;

    scanf("%d", &step);
    printf("%d\n%d\n", n1, n2);

    for (i = 3; i <= step; ++i)
    {

        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf("%d\n", temp);
    }

    return 0;
}