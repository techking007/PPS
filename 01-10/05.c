// Convert Kilometer to meter,foot, inches and centimeter

#include <stdio.h>

int main()
{

    double km, meter, foot, inch, cm;

    printf("Kilometer: ");
    scanf("%lf", &km);

    meter = km * 1000;
    foot = km * 3280.84;
    inch = km * 39370.1;
    cm = km * 100000;

    printf("Meter = %lf\n", meter);
    printf("Foot  = %lf\n", foot);
    printf("Inch  = %lf\n", inch);
    printf("Cm    = %lf\n", cm);

    return 0;
}
