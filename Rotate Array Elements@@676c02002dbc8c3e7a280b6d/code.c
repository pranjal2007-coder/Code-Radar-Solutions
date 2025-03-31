#include <stdio.h>

void leftRotate(int arr[], int n, int shift) {
    shift = shift % n; // Optimize shift value

    if (shift == 0) return; // No need to rotate if shift is 0

    int temp[shift]; // Temporary array to store first 'shift' elements

    // Copy first 'shift' elements to temp
    for (int i = 0; i < shift; i++)
        temp[i] = arr[i];

    // Shift the remaining elements to the left
    for (int i = 0; i < n - shift; i++)
        arr[i] = arr[i + shift];

    // Copy temp elements to the end
    for (int i = 0; i < shift; i++)
        arr[n - shift + i] = temp[i];
}

int main() {
    int n, shift;

    scanf("%d", &n);
    int a[n]; // Use variable-length array (VLA) instead of fixed size

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &shift);

    if (n > 0) { // Avoid processing if array is empty
        leftRotate(a, n, shift);

        for (int i = 0; i < n; i++)
            printf("%d\n", a[i]); // Print elements in a single line
    }

    return 0;
}
