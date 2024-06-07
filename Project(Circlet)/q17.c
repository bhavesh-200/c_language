#include <stdio.h>

int main() 
{
	int i,j,k,l;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = 1; k <= 2 * (5- i); k++) {
            printf("   ");
        }

        for (l = i; l >= 1; l--) {
            if (l != 5) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }
    for (i = 5- 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = 1; k <= 2 * (5 - i); k++) {
            printf("   ");
        }
        for (l = i; l >= 1; l--) {
            if (l != 5) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }

    return 0;
}

