#include <stdio.h>

int main() {
    int n,count=0,num;
    scanf("%d",&num);
 
    if (num==0){ 
        printf("31");
    }
    mask=1<<31;
    while ((num & mask)==0){
        count++;
        mask>>=1;
    }
    printf("%d",count)
    return 0;
}