#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    (a&(1<<b)==1)?printf("Set"): printf("Not Set");
    return 0;
}