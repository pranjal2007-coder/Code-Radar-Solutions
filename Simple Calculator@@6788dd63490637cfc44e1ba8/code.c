#include <stdio.h>

int main() {
  int a,b,d;
  char ch;
  scanf ("%d%d",&a,&b);
  scanf("%c",&ch) ;
  switch(ch){
    case '+':
         d=a+b; 
         printf("%d",d);
    break;
    case '-': printf("%d",a-b);
    break;
    case '*': printf("%d",a*b);
    break;
    case '/': printf("%d",a/b);
    break;
         default : printf("error");
      
  }
    return 0;
}