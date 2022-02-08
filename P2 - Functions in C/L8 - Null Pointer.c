#include <stdio.h>

int main() {

    /*  --------------------- NULL POINTER -------------------
    --- it points to nothing
    --- deferencing not possible
    --- used to check pointer is legitimate or not
    
      ------------------------- USE of NULL POINTER ----------------------
    ---- initialize a pointer variable where pointer has not assigned any address yet
    ---- we can perform error handlng while using pointers
    ---- pass null pointer to function argument when we dont want to pass any valid address
    ---- NULL macro is defined as ((void*)0)
    
    NULL ptr is value whereas void pointer is a type
    */

    int x = 10;
    int* ptr = NULL;
    printf("%p\n" , ptr);        // 0x0
    
    ptr = &x;
    printf("%p\n" , ptr);        // address of x
   
    return 0;
}
