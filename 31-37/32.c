#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
} t;

int main(void)
{
    printf("\n Enter Hour : ");
    scanf("%d", &t.hour);
    printf("\n Enter Minute: ");
    scanf("%d", &t.minute);
    printf("\n Enter Second : ");
    scanf("%d", &t.second);

    printf("\n Time %d:%d:%d", t.hour % 24, t.minute % 60, t.second % 60);

    return 0;
}
