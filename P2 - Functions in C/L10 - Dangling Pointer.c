#include <stdio.h>

int main() {

    /* ---------------- WILD POINTER ----------------
    ---- uninitialsied pointer
    ---- pointer to arbitrary location in memory
    ---- may cause the program to crash if deferenced
    ---- always initialize unuse pointers to NULL
    */

   int a = 12;
   int *ptr;    // ptr is wild pointer
  
   // *ptr = 34;       -------> not appropriate to use (NOT RECOMMENDED)
  
   ptr = &a;    // no longer wild
   printf("%d\n" , *ptr);   // 12
   
   return 0;
}
