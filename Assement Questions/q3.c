#include<stdio.h>
#include<conio.h>
void main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("Maximum number is: %d\n", num1);
    else if (num2 > num1)
        printf("Maximum number is: %d\n", num2);
    else
        printf("Both numbers are equal.\n");
    getch();
}

