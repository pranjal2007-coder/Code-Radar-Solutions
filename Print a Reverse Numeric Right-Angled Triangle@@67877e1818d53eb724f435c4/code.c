#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        int a=1;
       for(j=i;j>=1;j--){
        printf( "%d ",a++);
             
      
        }
   printf("\n");}
    return 0;
}