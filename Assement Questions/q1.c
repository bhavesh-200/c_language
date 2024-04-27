#include<stdio.h>
#include<conio.h>
void main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("You entered zero.\n");
    getch();
}

