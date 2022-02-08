#include <stdio.h>
#include <stdlib.h>     // for malloc() and free() function

int main() {

    /*    --------------- DANGLING POINTER ---------------
    --- point to free memory location or location whose content is deleted
    
    
    CAUSES:-
        ----- Deallocation of Memory
        ----- Returning address of local variable in function call
        ----- Variable going out of scope
     
     
    To avoid this initialize pointers by NULL pointer.
    */

   int *ptr = (int *) malloc(sizeof(int));  // a pointer
   free(ptr);   // ptr becomes dangling pointer
   ptr = NULL;  // no  longer dangling
   
   return 0;
}
