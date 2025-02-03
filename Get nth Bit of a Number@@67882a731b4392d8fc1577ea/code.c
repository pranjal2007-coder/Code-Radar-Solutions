#include <stdio.h>

int main() {
    int a,num,n,bit;
    scanf("%d%d",&num,&n);
    a=1<<n;
    bit=(num&a)?printf("1"): printf("0");
    return 0;
}