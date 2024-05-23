#include <stdio.h>
void main() 
{
    int option1, option2;
    printf("Welcome to Telecom Call Service Conversation\n");
    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Local Call\n");
        printf("2. National Call\n");
        printf("3. International Call\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option1);
        switch (option1) 
		{
            case 1:
                printf("\nLocal Call Menu:\n");
                printf("1. Landline\n");
                printf("2. Mobile\n");
                printf("3. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &option2);
                switch (option2) 
				{
                    case 1:
                        printf("You have selected Landline Local Call.\n");
                        break;
                    case 2:
                        printf("You have selected Mobile Local Call.\n");
                        break;
                    case 3:
                        printf("Going back to Main Menu.\n");
                        break;
                    default:
                        printf("Invalid choice! Please try again.\n");
                }
                break;
            case 2:
                printf("\nNational Call Menu:\n");
                printf("1. Landline\n");
                printf("2. Mobile\n");
                printf("3. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &option2);
                switch (option2) 
				{
                    case 1:
                        printf("You have selected Landline National Call.\n");
                        break;
                    case 2:
                        printf("You have selected Mobile National Call.\n");
                        break;
                    case 3:
                        printf("Going back to Main Menu.\n");
                        break;
                    default:
                        printf("Invalid choice! Please try again.\n");
                }
                break;
            case 3:
                printf("You have selected International Call.\n");
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
	getch();
}

