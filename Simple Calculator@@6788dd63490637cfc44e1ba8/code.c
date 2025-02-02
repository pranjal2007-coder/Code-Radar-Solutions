#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b;
  char ch;
  scanf ("%d%d",&a,&b,&r);
  scanf("%c", &ch) ;
  switch(ch){
    case '+': 
    r=a+b
    printf("%d",5);
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