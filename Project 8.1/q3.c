#include <stdio.h>
#define MAX_SIZE 100
void add_arrays(int arr1[], int arr2[], int result[], int size) 
{
	int i;
    for (i = 0; i < size; i++) 
	{
        result[i] = arr1[i] + arr2[i];
    }
}

void main() 
{
    int size;
    int arr1[MAX_SIZE], arr2[MAX_SIZE], result[MAX_SIZE];
	int i;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements for array 1:\n");
    for (i = 0; i < size; i++) 
	{
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements for array 2:\n");
    for (i = 0; i < size; i++) 
	{
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    add_arrays(arr1, arr2, result, size);
    printf("Result of addition:\n");
    for (i = 0; i < size; i++) 
	{
        printf("result[%d] = %d\n", i, result[i]);
    }
    getch();
}

