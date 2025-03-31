#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    k = k % n; // Optimize the shift value
    for (int i = k; i < n; i++)  
        printf("%d\n", arr[i]); // Print elements from k to n-1
    
    for (int i = 0; i < k; i++)  
        printf("%d\n", arr[i]); // Print first k elements at the end
}

int main() {
    int n, k;
    
    scanf("%d", &n);  
    int arr[n];  

    for (int i = 0; i < n; i++)  
        scanf("%d", &arr[i]);  
    
    scanf("%d", &k);  

    leftRotate(arr, n, k); // Call function

    return 0;
}
