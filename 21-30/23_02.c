#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
