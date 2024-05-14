#include <stdio.h>
#include <string.h>
#define CORRECT_EMAIL "example@example.com"
#define CORRECT_PASSWORD "password123"
void main() 
{
    char email[100], password[100];
    printf("Enter email: ");
    scanf("%s", email);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(email, CORRECT_EMAIL) == 0 && strcmp(password, CORRECT_PASSWORD) == 0) 
    {
        printf("Login successful!\n");
    } else 
    {
        printf("Invalid email or password. Please try again.\n");
    }
    getch();
}
