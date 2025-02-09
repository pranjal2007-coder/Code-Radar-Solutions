#include<stdio.h>
#include<math.h>
int main(){
int i,n;
scanf("%d",&n);
i=2;
while(i<=n/2){
 if (i%n==0){
printf("Number is not prime");
break; }
   i++;
}
 printf("Prime number");
}