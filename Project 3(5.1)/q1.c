#include<stdio.h>
#include<conio.h>
void main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 < num2) {
        printf("Minimum number: %d\n", num1);
    } else {
        printf("Minimum number: %d\n", num2);
    }
    getch();
}

