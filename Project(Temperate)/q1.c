#include<stdio.h>
#include<conio.h>
void main() 
{
    char alphabet = 'a';
    printf("Alphabets from a to z by skipping 3 alphabets:\n");
    do {
        printf("%c ", alphabet);
        alphabet += 3;
    } while (alphabet <= 'z');
    printf("\n");
    getch();
}

