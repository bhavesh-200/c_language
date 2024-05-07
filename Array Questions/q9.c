#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int deleteValue;
    int newSize = 0;
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the value to delete: ");
    scanf("%d", &deleteValue);
    for (i = 0; i < size; i++) 
	{
        if (array[i] != deleteValue) 
		{
            array[newSize++] = array[i];
        }
    }
    size = newSize;
    printf("Updated elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    getch();
}

