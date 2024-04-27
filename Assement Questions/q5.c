#include<stdio.h>
#include<conio.h>
void main() 
{
    float km, meter, cm, mm;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    meter = km * 1000;
    cm = meter * 100;
    mm = cm * 10;
    printf("%.2f kilometers is equal to:\n", km);
    printf("%.2f meters\n", meter);
    printf("%.2f centimeters\n", cm);
    printf("%.2f millimeters\n", mm);
    getch();
}

