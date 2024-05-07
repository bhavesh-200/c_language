#include<stdio.h>
#include<conio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) 
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) 
	{
        if (arr1[i] < arr2[j]) 
		{
            merged[k++] = arr1[i++];
        } else 
		{
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) 
	{
        merged[k++] = arr1[i++];
    }
    while (j < size2) 
	{
        merged[k++] = arr2[j++];
    }
}

void main() 
{
	int i;
    int arr1[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10, 12};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size_merged = size1 + size2;
    int merged[size_merged];
    mergeArrays(arr1, size1, arr2, size2, merged);
    printf("Merged Array: ");
    for (i = 0; i < size_merged; i++) 
	{
        printf("%d ", merged[i]);
    }
    printf("\n");
    getch();
}

