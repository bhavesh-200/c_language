#include<stdio.h>
#include<conio.h>
void squareElements(int arr[], int size) 
{
	int i;
    printf("Square of each element:\n");
    for (i = 0; i < size; i++) 
	{
        int square = arr[i] * arr[i];
        printf("%d ", square);
    }
    printf("\n");
}

void main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    squareElements(arr, size);
    getch();
}

