#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int i = 15, j = 20;
    printf("\n Before Swapping i = %d j = %d", i, j);
    swap(&i, &j);
    printf("\n After Swapping  i = %d j = %d", i, j);
    return 0;
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
