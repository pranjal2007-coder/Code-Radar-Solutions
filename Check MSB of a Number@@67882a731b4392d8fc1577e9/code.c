#include <stdio.h>


int main() {
   int num,a;
   scanf("%d",&num);
   a= 1<< 31;
   if (num & a) 
   printf("Set");
   else 
   printf("Not Set");

    return 0;
}