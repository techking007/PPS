// program should display equivalent grade

#include <stdio.h>

int main()
{
    int t;
    int marks;
    int sub = 1;

    printf("Enter number of Subjects: ");
    scanf("%d", &t);

    while (t != 0)
    {
        printf("How obtained marks for the Subject%d: ", sub);
        scanf("%d", &marks);

        if (marks >= 80 && marks <= 100)
            printf("Passed Subject%d with Distinction\n", sub);
        else if (marks >= 60 && marks <= 79)
            printf("Passed Subject%d with First Class\n", sub);
        else if (marks >= 40 && marks <= 59)
            printf("Passed Subject%d with Second Class\n", sub);
        else
            printf("Failed the subject\n");

        printf("\n");
        --t;
        ++sub;
    }

    return 0;
}