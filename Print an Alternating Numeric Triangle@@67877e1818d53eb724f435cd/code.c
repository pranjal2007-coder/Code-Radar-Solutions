#include <stdio.h>

int main() {
    int i,j,n,a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i;j++){

     ((i+j)%2==0)?printf("%d ",a):printf("%d ",b); 
      
        }
   printf("\n");}
    return 0;
}