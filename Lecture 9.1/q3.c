#include <stdio.h>
void main() 
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Toggled case string: %s\n", str);
    getch();
}
