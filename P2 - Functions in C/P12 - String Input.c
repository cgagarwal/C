#include <stdio.h>

int main() {
  
    char str1[52] , str2[90];

    // input the string from user
    scanf("%s" , str1);      // white spaces not captured
    // '&' not used ; str is array ; address of first element

    getchar();   // consume the newline character
    
    // use for reading the whole line
    scanf("%[^\n]s", str2);   // read until new line encounters
    // scanset character

    printf("%s\n%s\n", str1 , str2);
 
    return 0;
}
