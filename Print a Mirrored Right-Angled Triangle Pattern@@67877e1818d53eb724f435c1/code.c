#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {  // Loop for rows
        for (j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) {  // Print asterisks
            printf("*");
        }
        printf("\n"); // Move to next line
    }
    
    return 0;
}
