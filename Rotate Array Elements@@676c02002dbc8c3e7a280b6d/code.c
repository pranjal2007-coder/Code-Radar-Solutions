
#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    k = k % n; // Optimize shift value
    for (int i = n - k; i < n; i++)  
        printf("%d\n", arr[i]); // Print last 'k' elements first
    
    for (int i = 0; i < n - k; i++)  
        printf("%d\n", arr[i]); // Print first 'n-k' elements next
}

int main() {
    int n, k;
    
    scanf("%d", &n);  
    int arr[n];  

    for (int i = 0; i < n; i++)  
        scanf("%d", &arr[i]);  
    
    scanf("%d", &k);  

    rightRotate(arr, n, k); // Call function

    return 0;
}
