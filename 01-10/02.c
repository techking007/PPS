// Write a program to find area of triangle

#include <stdio.h>

int main()
{
    float height, base, area;

    printf("Enter the value of Base and Height: ");
    scanf("%f%f", &base, &height);

    area = base * height * 0.5;

    printf("Area is %f\n", area);
    return 0;
}
