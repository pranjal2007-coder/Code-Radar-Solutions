#include <stdio.h>


int main() {
    int n, i,shift,a[100];
    char ch;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number of shifts: ");
    scanf("%d", &shift);

    int temp;


    for (int k=1;k<=shift;k++)
    {


    temp=a[0];
    for(i=0;i<n;i++)
   a[i]=a[i+1];

   a[n-1]=temp;

    }
 for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}




