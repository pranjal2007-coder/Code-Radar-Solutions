// Your code here...
#include <stdio.h>
int main(){
int n,;
scanf("%d",&n);

 int a[n];
 for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);

    }
int min,max;
min=max=a[0];
    for (i = 0; i < n; i++) {
        if (a[i]<n)
            min=a[i];
       if (a[i]>max)
        max=a[i];
    }

    printf("%d %d\n",min,max);

return 0;
}