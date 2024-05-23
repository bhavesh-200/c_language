#include <stdio.h>
void reverseArray(int *arr, int size) 
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;
    while (start < end) 
	{
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
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
    printf("Original array: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverseArray(arr, n);
    printf("Reversed array: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    getch();
}

