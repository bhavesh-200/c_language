#include <stdio.h>
#include <string.h>
int isStrongPassword(char password[]) 
{
    int len = strlen(password);
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    if (len < 6)
        return 0;
    for (int i = 0; i < len; i++) 
    {
        if (isalpha(password[i]))
            hasLetter = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (!isalnum(password[i]))
            hasSpecial = 1;
    }
    return (hasLetter && hasDigit && hasSpecial);
}
void main() 
{
    char password[100];
    printf("Enter the password: ");
    scanf("%s", password);
    if (isStrongPassword(password))
        printf("Strong password!\n");
    else
        printf("Weak password.\n");
    getch();
}
