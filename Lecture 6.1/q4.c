#include <stdio.h>
void main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if (N % 2 == 0) {
        N--;
    }
    while (N > 0) {
        printf("%d\n", N);
        N -= 2;
    }
    getch();
}

