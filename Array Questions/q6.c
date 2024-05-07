#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int sum = 0;
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++) 
	{
        sum += array[i];
    }
    printf("Sum of all elements: %d\n", sum);
    getch();
}

