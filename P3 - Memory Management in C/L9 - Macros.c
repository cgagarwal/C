/*  ------------------------------- Predined Macros -------------------------------

__DATE__                        current date as character literal "MMM DD YYYY" Format.
__TIME__                        current time as character literal "HH:MM:SS"  Format.
__FILE__                        current filename as a string literal.
__LINE__                        current line number as a decimal constant.
__STDC__                        defined as 1 when the compiler with the ANSI standard

*/

// preprocessor is a kind of automated editor that modifies a copy of original source code
#include <stdio.h>

int main() {

    printf("File name is %s\n" , __FILE__);     // Macros.c
    printf("Date is %s\n" , __DATE__);     // Dec 17 2021
    printf("Time is %s\n" , __TIME__);     // 20:16:42
    printf("Line no is %d\n" , __LINE__);     // 19
    printf("ANSI: %d\n" , __STDC__);     // 1

    return 0;
}
