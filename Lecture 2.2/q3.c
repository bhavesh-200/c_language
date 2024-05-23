#include <stdio.h>
double calculateArea(double base, double height) 
{
    return 0.5 * base * height;
}

void main() 
{
    double base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    area = calculateArea(base, height);
    printf("The area of the triangle with base %.2lf and height %.2lf is %.2lf\n", base, height, area);
    getch();
}

