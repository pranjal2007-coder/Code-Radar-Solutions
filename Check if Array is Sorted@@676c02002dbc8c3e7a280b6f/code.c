#include <stdio.h>
int main(){
int n,i;
scanf("%d",&n);

 int a[n];

 for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);

    }
int sorted=1;


    for (i = 1; i < n; i++) {
        if (a[i]>a[i+1])
            sorted=0;
            break;
        }

if (sorted)
    printf("Sorted");
else
    printf("Not Sorted");

return 0;
}
