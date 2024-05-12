#include <stdio.h>
#define MAX_SIZE 100
void main() 
{
    int arr[MAX_SIZE];
    int size;
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Negative elements in the array: ");
    for (i = 0; i < size; i++) 
	{
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    getch();
}

