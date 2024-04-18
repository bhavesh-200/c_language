#include<stdio.h>
#include<conio.h>
void main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) 
	{
        printf("The number is neutral (0).\n");
    } else if (number < 0) 
	{
        printf("The number is negative.\n");
    } else 
	{
        printf("The number is positive.\n");
    }
    getch();
}

