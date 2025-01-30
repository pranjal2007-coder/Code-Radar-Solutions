#include <stdio.h>

int main() {
    int n,count;
    scanf("%d",&n);
    count=0;
    while((n|1)==1)
   
    {
        n=n>>1;
        count++;
    }
    printf("%d",count);
    return 0;
}