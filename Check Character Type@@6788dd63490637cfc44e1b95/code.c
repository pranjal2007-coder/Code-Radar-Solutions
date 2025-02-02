#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if (c>='a'&& c<='z'|| c>='A'&& c<='Z'){
    if (c=='a'||'e'||'i'||'o'||'u'||'A'||'I'||'E'||'O'||'U')
    printf("Consonant");
    else printf("Vowel");
        }
    else if (c>='0'&& c<='9'){
        printf("Digit");
    }
    else printf("Special Character");
    
    return 0;
}