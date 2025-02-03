#include <stdio.h>

int main() {
    int n,count=0,num;
    scanf("%d",&num);
 
    if (num==0){ 
        printf("31");
    }
    n=1<<31;
    while ((num & n)==0){
        count++;
       n >=1;
    }
    printf("%d",count);
    return 0;
}