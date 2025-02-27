// Your code here...
#include <stdio.h>
int main(){
    int n,i,k,j;
     int a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       
        for(k=1;k<=n-i;k++){
         printf(" ") ;  
        }
        for(j=1;j<=n-1;j++){
            printf("%d ",a++);
        }
  printf("\n");  }
}