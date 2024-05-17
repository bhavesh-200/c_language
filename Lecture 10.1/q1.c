#include <stdio.h>
int cube(int num) 
{
    return num * num * num;
}

void main() 
{
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = cube(number);
    printf("The cube of %d is: %d\n", number, result);
    getch();
}
