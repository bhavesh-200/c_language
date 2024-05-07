#include<stdio.h>
#include<conio.h>
void main() 
{
    int number;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        count++;
        number /= 10;
    } while (number != 0);
    printf("Total number of digits: %d\n", count);
    getch();
}

