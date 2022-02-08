#include <stdio.h>
#include <stdlib.h>  // function for Dynamic Memory Allocation

int main() {
    /*  ---------------------- Dynamic Memory Allocation ---------------------------
    --- used to change the size at runtime
    --- runtime allloacted memory must be freed after use
    --- dynamically allocated memory uses HEAP
    
    ------------- FUNCTIONS USED -----------------
    ---       malloc ; calloc ; realloc ; free
    --- return value is a void pointer ; so must cast into required pointer
    --- in case of insufficient space , memory allocation fails     ---> it returns NULL POINTER
    */

  
   int* ptr;        // malloc ------ memory allocation
   ptr = (int*) malloc(3*sizeof(int));     // all values initialized by garbage values
   free(ptr);

  
   int* ptr2;   // calloc ----- continogous allocation
   ptr2 = (int*) calloc(3,sizeof(int));  // all the values initialized by 0
  

   // realloc ----- reallocation
   ptr2 = (int*) realloc(ptr2,4*sizeof(int));
   // use to change the size of previously allocated memory without losing data
   // it increases the size of array and restores the previous value of pointer at same location

  
   free(ptr2);   // used to free the allocate memory
   //   free the memory used by program in the heap
    
    
   /* -------------------- Memory Leak -----------------------
   --- caused when we don't use dynamic allocation properly.
   --- when we don't free the memory in heap and keep on allocating more.
   --- create memory block in memory and forgets to delete it.
   */
    
   return 0;
}
