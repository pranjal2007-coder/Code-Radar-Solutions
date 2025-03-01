#include <stdio.h>

int main() {
    int i,j,n,a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i;j++){

     (j%2==0)?printf("%d",b):printf("%d ",(i+j)%2); 
      
        }
   printf("\n");}
    return 0;
}