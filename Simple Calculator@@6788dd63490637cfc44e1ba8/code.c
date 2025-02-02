#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b,r;
  char ch;
  scanf ("%d%d",&a,&b);
  scanf("%c", &ch) ;
  switch(ch){
    case '+': 
    r=a+b;
    printf("%d",r);
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