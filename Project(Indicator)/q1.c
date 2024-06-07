#include <stdio.h>
int stringLength(const char *str) 
{
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

void main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }
    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);
    getch();
}

