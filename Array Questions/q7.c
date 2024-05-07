#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int index, newValue;
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the index to add the new element (0 to %d): ", size);
    scanf("%d", &index);
    if (index >= 0 && index <= size) 
	{
        printf("Enter the new value: ");
        scanf("%d", &newValue);
        for (i = size; i > index; i--) 
		{
            array[i] = array[i - 1];
        }
        array[index] = newValue;
        size++;
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

