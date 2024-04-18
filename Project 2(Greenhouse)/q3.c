#include<stdio.h>
#include<conio.h>
void main() 
{
    float angle1, angle2, angle3;
    printf("Enter first angle (in degrees): ");
    scanf("%f", &angle1);
    printf("Enter second angle (in degrees): ");
    scanf("%f", &angle2);
    angle3 = 90 - (angle1 + angle2);
    printf("Third angle: %.2f degrees\n", angle3);
    getch();
}

