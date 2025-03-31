#include <stdio.h>

void leftRotate(int arr[], int n, int shift) {
    shift = shift % n; // Optimize shift value
    if (shift == 0) return; // No rotation needed

    int temp[shift]; // Temporary array to store first 'shift' elements

    // Copy first 'shift' elements to temp
    for (int i = 0; i < shift; i++)
        temp[i] = arr[i];

    // Shift remaining elements to the left
    for (int i = 0; i < n - shift; i++)
        arr[i] = arr[i + shift];

    // Copy temp elements to the correct position at the end
    for (int i = 0; i < shift; i++)
        arr[n - shift + i] = temp[i];
}

int main() {
    int n, shift;

    // Take input
    scanf("%d", &n);
    int a[n]; // Variable-length array

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &shift);

    // Rotate only if n > 1
    if (n > 1) {
        leftRotate(a, n, shift);
    }

    // Print the rotated array in a single line
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
