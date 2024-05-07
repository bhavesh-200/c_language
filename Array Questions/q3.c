#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int deleteIndex;
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the index of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &deleteIndex);
    if (deleteIndex >= 0 && deleteIndex < size) 
	{
        for (i = deleteIndex; i < size - 1; i++) 
		{
            array[i] = array[i + 1];
        }
        size--;
        printf("Updated elements of the array:\n");
        for (i = 0; i < size; i++) 
		{
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index!\n");
    }
    getch();
}

