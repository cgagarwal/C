#include <stdio.h>

int main() {
    // pointer declare using * (asterisk symbol)

    // '&'  --- returns address of variable
    // '*'  --- deference operator (indirection operator)
    //      --- used to get value at given address

    int var = 12;
    printf("%d\n" , var);     //  12
    
    int* ptr1 = &var;
    printf("%d\n" , *ptr1);     //  12
    printf("%p\n" , ptr1);    //  address of var
    // %p  ---- for pointer

    printf("%p\n" , &ptr1);     //  address of ptr1

    /*  ------- NULL Pointer -------
    --- this pointer does not point to any object
    --- use to initialize the pointer, protect from garbage allocation
    */

    int* ptr = NULL;
    printf("%p\n" , ptr);    // 0x0

    /*  ---------- Uses of Pointers in C ---------
    ----    Dynamic Memory Allocation
    ----    Array , Fuction , Structures
    ----    Return Multiple values from function
    ----    reduces the code and improve performance
    */ 
  
  return 0;
}
