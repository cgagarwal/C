/* -------------------- PRE-PROCESSOR in C ----------------------
---- Removal of Comments                  ---- Expansion of Macros and included files

---- C preprocessor program invokes before actual compilation, it is not a part of C compiler.
---- It is a TEXT SUBSTITUTION TOOL.      ---- All preprocessor command begin with hash symbol (#).
*/

// preprocessor commands
#include <stdio.h>
#include <stdlib.h>

/* ---------------- PREPROCESSOR COMMANDS -------------------
#include                            include the header files in existing file
#define                             used to define the macros
#undef                              undefine the preprocessor macro
#ifdef                              check if macro is define or not
#ifndef                             check if macro is not define

#if                 if any compile time condition is true
#else               alternative to if
#elif               else + if (else if)
*/

int main() {
  
    /*
      Compilation (.s file) --> Assembly level Instructions (ALI) generated.
      
      Assembly (.o OR .exe file) ---> printf are not resolved yet.
                                 ---> ALI converted to machine code (in 0 or 1).
      
      Linking --> Links the function implementations
    */
  
    return 0;
}
