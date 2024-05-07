#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int updateIndices[] = {1, 3};
    int newValues[] = {10, 20};
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < sizeof(updateIndices) / sizeof(updateIndices[0]); i++) 
	{
        int index = updateIndices[i];
        if (index >= 0 && index < size) 
		{
            array[index] = newValues[i];
        }
    }
    printf("Updated elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    getch();
}

