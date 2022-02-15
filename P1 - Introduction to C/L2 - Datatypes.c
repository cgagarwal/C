#include <stdio.h>
#define N 56        // decalre constant at preprocessor level , i.e. globally

int main() {
    // variables are also known as identifiers
    // type variable_name = value;
    int x = 7;
    
    /*
        Primary (built in) data type    --- int , char , float , double , void
        Derived data type               --- array , pointer , structure , union, enum
    */
    
   float k;     // decimal
   printf("%lu\n" , sizeof(int));
    
   // ---------------- Costants in C ------------------
   // constants (const) are also known as literals
   
   // both are admissible
   int const a = 6;
   const int c = 12 ; // always constant
   
   // c = 2;   (Not Admissible)
   printf("%d\n" , N);     // 56
    
   return 0;
}
