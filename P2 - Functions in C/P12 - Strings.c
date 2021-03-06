#include <stdio.h>

int main() {
    /*    ----------------------- Strings ------------------------
    --- String is not a dataype in C
    --- Represent it with the help of character array
    --- Terminated by null character ('\0') ; Null character (ASCII value = 0)
    
    Length of character array  == (Length of String + 1) ; 1 for NUll Character
    */

    // use of double quotes
    char name[] = "Chirag";  // Compiler automatically use null character
    // 7 ----> length of array
  
    // declare string by array
    char surname[] = {'G','o','y','a','l','\0'};

    char hy[] = {'h','y','\0','y'}; // string terminated at null character
    printf("%s\n" , hy);      //  hy
    
    // %s ----> format specifier for stings
    printf("My Name is %s %s\n" , name , surname);

  
    // Format Specifiers of String
    char *s = "Chirag Goyal";   // also admissible
  
    printf("%20s\n",s);     // _______Chirag Goyal
    printf("%-20s\n",s);    // Chirag Goyal_______
    printf("%20.6s\n",s);   // ___________Chirag
    
    
    // INPUTTING THE STRING FROM USER
    char str1[52] , str2[90];
    
    scanf("%s" , str1);      // read until white spaces
    // '&' not used ; str is array ; address of first element
    
    getchar();   // consume a single character
    // return ASCII value of that character
    
    scanf("%[^\n]s", str2);   // read until new line encounters
    printf("%s\n%s\n", str1 , str2);
  
    return 0;
}
