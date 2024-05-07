#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int newValue;
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the new value to add: ");
    scanf("%d", &newValue);
    if (size < sizeof(array)/sizeof(array[0])) 
	{
        array[size] = newValue;
        size++;
        printf("Updated elements of the array:\n");
        for (i = 0; i < size; i++) 
		{
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("Array is full! Cannot add more elements.\n");
    }
    getch();
}

