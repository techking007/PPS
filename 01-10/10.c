// program to prepare payslips

#include <stdio.h>

int main()
{
    int t;
    int basic, Ma = 300;
    float Da, Hra, Pf, Gross, Nt;

    printf("Total number of payslips: ");
    scanf("%d", &t);

    while (t != 0)
    {
        printf("Basic%d: ", t);
        scanf("%d", &basic);

        Da = basic * 0.1;
        Hra = basic * 0.075;
        Pf = basic * 0.125;

        Gross = basic + Da + Hra + Ma;
        Nt = Gross - Pf;

        printf("Da%d      = %.2frs\n", t, Da);
        printf("Hra%d     = %.2frs\n", t, Hra);
        printf("Pf%d      = %.2frs\n\n", t, Pf);

        printf("Gross%d   = %.2frs\n", t, Gross);
        printf("Nt%d      = %.2frs\n", t, Nt);

        --t;
    }

    return 0;
}