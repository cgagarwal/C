/* -------------------- #include directive -----------------------
--- it causes the preprocessor to fetch content of some other file in present file
--- most commonly #included files have .h extension , indicating that they are header files

#include formats
--- #include <headerFile.h>         <> to look in standard system directories
--- #include "myFile.h"             "" to look in current directory

// disk full path is allowed
#include <C:\Progra Files\Chirag\somefile.h>            // Too specific
#include <sys/file.h>                                // relative and portable path to standard locations


-------------------- #define directive -----------------------
    --- use to define preprocessor variables
    --- use to globally replace a word with number

#define can be used as debugging
    --- we can have printing statement that we only want active when debugging
    --- we can protect them in a #ifdef block

create macros using #define
    --- macros operate like functions
    --- they are expanded in place , so generally faster
*/

#include <stdio.h>
// #include "MyFile.c"     // file included
#define PI 3.14
#define SQUAQRE(x) x*x


int main() {
    printf("Value of pi is %f\n" , PI);
    printf("Area is %f\n" , PI * SQUAQRE(5));

    return 0;
}
