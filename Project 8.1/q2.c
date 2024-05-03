#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 100
float array_average(int arr[], int size) 
{
    int sum = 0;
    float average;
    int i;
    for(i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    average = (float)sum / size;
    return average;
}

void main() 
{
    int size;
    int arr[MAX_SIZE];
    int i;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    float average = array_average(arr, size);
    printf("Average of the array: %.2f\n", average);
    getch();
}

