#include <stdio.h>

int main(void)
{
    int a[10] = {2, 10, 6, 7, 8, 9, 5, 3, 4, 1};
    int *p, i = 0, j = 0;
    p = &a[0];
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (*(p + i) > *(p + j))
            {
                *(p + i) = *(p + i) + *(p + j);
                *(p + j) = *(p + i) - *(p + j);
                *(p + i) = *(p + i) - *(p + j);
            }
        }
    }
    printf("\n Sorted Values : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
