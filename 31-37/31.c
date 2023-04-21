
#include <stdio.h>

struct person
{
    char name[20];
    char doj[10];
    float salary;
} p[5];

int main(void)
{
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\n Enter Person Name : ");
        scanf("%s", p[i].name);
        printf("\n Enter Person Date of Joining (dd-mm-yyyy) : ");
        scanf("%s", p[i].doj);
        printf("\n Enter Person Salary : ");
        scanf("%f", &p[i].salary);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n Person %d Detail", i + 1);
        printf("\n Name   = %s", p[i].name);
        printf("\n DOJ    = %s", p[i].doj);
        printf("\n Salary = %.2f", p[i].salary);
    }
    return 0;
}
