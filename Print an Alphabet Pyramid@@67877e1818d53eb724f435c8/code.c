// Your code here...
#include <stdio.h>

int main() {
    int n, i, k, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }

        // Print numbers
        int ch ='A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
