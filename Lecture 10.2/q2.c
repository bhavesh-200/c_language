#include<stdio.h>
#include<string.h>
int stringLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}

void main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = stringLength(str);
    printf("Length of the string is: %d\n", length);
    getch();
}
