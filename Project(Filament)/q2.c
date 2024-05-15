#include <stdio.h>
#include <string.h>
#define MAX_CHARS 256
void countFrequency(char *str) 
{
    int frequency[MAX_CHARS] = {0};
    for (int i = 0; str[i] != '\0'; i++) 
    {
        frequency[(int)str[i]]++;
    }
    printf("Character\tFrequency\n");
    for (int i = 0; i < MAX_CHARS; i++) 
    {
        if (frequency[i] != 0) 
        {
            printf("%c\t\t%d\n", i, frequency[i]);
        }
    }
}

void main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Frequency of characters in the string:\n");
    countFrequency(str);
    getch();
}
