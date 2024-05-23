#include <stdio.h>
void squareArray(int *arr, int size) 
{
	int i;
    for (i = 0; i < size; i++) 
	{
        arr[i] = arr[i] * arr[i];
    }
}

void main() 
{
    int n;
    int i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    squareArray(arr, n);
    printf("The squared elements of the array are:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    getch();
}

