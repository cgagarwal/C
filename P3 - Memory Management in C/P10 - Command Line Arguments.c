/* ------------------- Command Line Arguments --------------------
--- used to supply parameters when program invoked.
--- used when we need to control program from console.
--- passed to main() function.

argc (argument count)   --> denotes no. of passed arguments
argv (argument vector)  --> denotes to a pointer array that is pointing to every argument

*/

#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("Value of argc is %d\n" , argc); // 1 default
    // 1 because always have one program name
  
    for(int i = 0 ; i < argc ; i++) {
        printf("Argument no %d is %s\n" , i , argv[i]); 
    }
    // argv[0] full address of c
    // after that passed arguments
  
    return 0;
}
