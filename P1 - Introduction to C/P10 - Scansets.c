#include <stdio.h>

int main() {

    // scanf will process only those characters which are part of scanset
    // define scanset by putting characters inside square brackets
    // scanset specifiers are represented by %[]
    
    char arr[56];
    scanf("%[A-Z]s" , arr);      // CHIRaggOYAL
    printf("%s" , arr);         // CHIR
    
    // scan until appaeared characters are in scanset
    scanf("%[0-9,_,x,y]s" , arr);  // xy1782_kxy2
    printf("%s" , arr);     // xy1782_
  
    
    //  ‘^’ uses then stop reading after first occurrence of that character
    scanf("%[^o]s", arr);   // Chirag Goyal
    printf("%s" , arr);    // Chirag G
    
    scanf("%[^\n]s", arr);   // read until new line encounters
  
    return 0;
}
