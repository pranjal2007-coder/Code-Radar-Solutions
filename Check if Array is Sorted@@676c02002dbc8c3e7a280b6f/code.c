#include <stdio.h>

int main() {
    int n, sorted = 1; // Assume array is sorted

    // Input size of array
    
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if array is sorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0; // Not sorted
            break; // No need to check further
        }
    }

    // Print result
    if (sorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}
