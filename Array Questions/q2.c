#include<stdio.h>
#include<conio.h>
void main() 
{
    int array[5] = {2, 4, 6, 8, 10};
    int index, newValue;
    int i;
    printf("Original elements of the array:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the index of the element to update (0 to 4): ");
    scanf("%d", &index);
    if (index >= 0 && index < 5) 
	{
        printf("Enter the new value: ");
        scanf("%d", &newValue);
        array[index] = newValue;
        printf("Updated elements of the array:\n");
        for (i = 0; i < 5; i++) 
		{
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index!\n");
    }
    getch();
}

