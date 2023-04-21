#include <stdio.h>
#include <string.h>

struct cricket
{
    char player_name[20];
    char team_name[20];
    float batting_avg;
} p[50], t;

int main(void)
{
    int i = 0, j = 0, n = 50;

    for (i = 0; i < n; i++)
    {
        printf("\n Enter Player Name : ");
        scanf("%s", p[i].player_name);
        printf("\n Enter Team Name : ");
        scanf("%s", p[i].team_name);
        printf("\n Enter Batting Average : ");
        scanf("%f", &p[i].batting_avg);
    }

    // Sorting of Data based on Team
    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (strcmp(p[i].team_name, p[j].team_name) > 0)
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }

    j = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(p[i].team_name, p[j].team_name) != 0 || i == 0)
        {
            printf("\n Team Name: %s", p[i].team_name);
            j = i;
        }
        printf("\n Player Name     = %s", p[i].player_name);
        printf("\n Batting Average = %f", p[i].batting_avg);
    }
    return 0;
}
