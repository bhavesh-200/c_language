#include<stdio.h>
#include<conio.h>
void main() 
{
    int size;
    int i;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of the array: %d\n", length);   
    getch();
}

