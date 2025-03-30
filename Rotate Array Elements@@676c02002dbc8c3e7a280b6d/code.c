#include <stdio.h>

int main() {
    int n, i, shift, a[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &shift);

    shift = shift % n; // Optimize shift value

    int temp;

    // Perform left rotation 'shift' times
    for (int k = 0; k < shift; k++) { // Start k from 0
        temp = a[0]; // Store the first element

        for (i = 0; i < n - 1; i++)
            a[i] = a[i + 1]; // Shift elements left

        a[n - 1] = temp; // Move stored element to the end
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]); // Print elements in one line

    return 0;
}
