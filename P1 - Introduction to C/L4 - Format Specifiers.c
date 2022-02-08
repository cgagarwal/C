#include <stdio.h>

int main() {
    /*
            %c (char)       %d (int)         %f (float)
            %l (long)       %lf (double)      %Lf (long double)
    */
    
    int a = 8;
    float b = 7.892;
    printf("%d %f\n", a , b);   // 8 7.892000
    
    printf("%0.3f \n" , b);     //  7.892
    printf("%18.4f\n" , b);   // 18 charcter total (______7.8920)
    printf("%5.4f\n" , b);      //  same (less than total digits)   
    printf("%-18.4f\n" , b);     // 18 character total (7.8920________)
    
    // escape sequence      ('\n')
    /*
            \n (new line)        \t (tab space)         \\ (backslash)
            \' (single quote)    \" (double quote)      \0 (NULL)
    */
  
  return 0;
}
