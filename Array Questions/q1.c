#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    printf("Elements of the array:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    getch();
}

