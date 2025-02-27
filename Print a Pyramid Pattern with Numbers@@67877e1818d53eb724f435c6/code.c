// Your code here...
#include <stdio.h>
int main(){
    int n,i,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(k=1;k<=n-i;k++){
         printf(" ") ;  
        }
        for(j=1;j<=n-i;j++){
            printf("%d ",a++);
        }
  printf("\n");  }
}