#include <stdio.h>
#include <string.h>
int isPalindrome(char *str) 
{
    int len = strlen(str);
    char reversed[len + 1];
    for (int i = 0; i < len; i++) 
    {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
    if (strcmp(str, reversed) == 0) 
    {
        return 1;
    } else {
        return 0;
    }
}

void main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str)) 
    {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    getch();
}
