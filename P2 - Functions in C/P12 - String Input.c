#include <stdio.h>

int main() {
  
    // input of string from user
    char str1[52] , str2[90];

    scanf("%s" , str1);      // white spaces not captured
    // '&' not used ; str is array ; address of first element

    getchar();   // consume the newline character
    // use for inputting a single character
    
    
    scanf("%[^\n]", str2);    //  includes white spaces
    /*  EXPlANATION :-
                ---  [] is the scanset character
                ---  ^\n stands for taking input until a newline isn't encountered
                ---  %[^\n] is an edit conversion code used to read strings
                ---  terminated at new line
                ---  read white spaces
    */

    printf("%s\n%s\n", str1 , str2);
 
    return 0;
}
