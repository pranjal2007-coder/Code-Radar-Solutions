// Your code here...
#include <stdio.h>

int main() {
    int n, i, first, second;
    
    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Ensure there are at least two elements
    if (n < 2) {
        
        return -1;
    }

    // Initialize first and second with the first two elements properly
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    // Find the second largest element
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    
        printf("%d\n", second);

    return 0;
}
