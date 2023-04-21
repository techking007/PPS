
#include <stdio.h>

struct student_record
{
    char name[20];
    char branch[20];
    int total_marks;
} p[10];

int main(void)
{
    int i = 0, n = 10;

    for (i = 0; i < n; i++)
    {
        printf("\n Enter Student Name : ");
        scanf("%s", p[i].name);
        printf("\n Enter Students Branch : ");
        scanf("%s", p[i].branch);
        printf("\n Enter Students Marks : ");
        scanf("%d", &p[i].total_marks);
    }

    for (i = 0; i < n; i++)
    {
        printf("\n Student %d Detail", i + 1);
        printf("\n Name        = %s", p[i].name);
        printf("\n Branch      = %s", p[i].branch);
        printf("\n Total marks = %d", p[i].total_marks);
    }
    return 0;
}
