#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int searchValue;
    int found = 0;
    int index = -1; 
    printf("Original elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the value to search: ");
    scanf("%d", &searchValue);
    for (i = 0; i < size; i++) 
	{
        if (array[i] == searchValue) 
		{
            found = 1;
            index = i; 
            break;
        }
    }
    if (found) 
	{
        printf("The value %d is found at index %d.\n", searchValue, index);
    } else {
        printf("The value %d is not found in the array.\n", searchValue);
    }
    getch();
}

