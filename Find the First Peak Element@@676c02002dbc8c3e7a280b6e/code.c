// Your code here...
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) { // Start from i = 0 to check the first element
        if ((i == 0 || a[i] > a[i - 1]) && (i == n - 1 || a[i] > a[i + 1])) {
            printf("%d", a[i]);
            return 0;
        }
    }
printf("-1");
    return 0;
}
