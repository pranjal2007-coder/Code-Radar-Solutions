#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b;
  char ch;
  scanf("%d%d%c",&a,&b,&ch);
  
  switch (ch){
    case ('+'): 
        printf("%d",a+b);
            break;
    case ('-'): printf("%d",a-b);
    break;
    case ('*'): printf("%d",a*b);
    break;
    case('/'): 
    switch(b){
        case 0: printf("error");
        break;
        default:printf("%d",a/b);    }
        break;
 
         default : printf("error");
      
  }
    return 0;
}