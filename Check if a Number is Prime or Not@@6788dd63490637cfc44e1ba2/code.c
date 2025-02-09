#include <stdio.h>

int main() {
    int n, i, flag = 1;

    // Input from user
 
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not prime\n", n);
        return 0;
    }

    // Check divisibility from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
if (flag)
        printf("Prime\n", n);
    else
        printf("Not prime\n", n);

    return 0;
}
