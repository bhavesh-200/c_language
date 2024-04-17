#include<stdio.h>
#include<conio.h>
void main() 
{
    int i, j;
    int width = 9;
    int height = 6;
    for (i = 0; i < height; i++) 
	{
        for (j = 0; j < width; j++) 
		{
            if (i == 0 || i == height - 1) 
			{
                printf("-");
            } else if (j == 0 || j == width - 1) 
			{
                printf("|");
            } else if (i == 2 && j == 1) 
			{
                printf("R");
            } else if (i == 3 && j == 1) 
			{
                printf("N");
            } else if (i == 4 && j == 1) 
			{
                printf("W");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}

