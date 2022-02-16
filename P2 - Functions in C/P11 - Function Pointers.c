#include <stdio.h>

int sum(int a , int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

void get(int (*fptr)(int , int)) {
    printf("Hello, there.\n");
    printf("Arithmetic on 5 and 7 is %d\n" , (*fptr)(5,7));
}

int main() {
   // Function pointers point to function, it points to code not data.

   printf("Sum of 2 and 3 is %d\n" , sum(2,3));    // to test the function

   int (*fptr) (int , int);  // declaration of function ptr
   fptr = &sum;         // define the value of function pointer

   int d = (*fptr)(4,5);    // deferencing a function pointer
   printf("d is %d\n" , d);
    
    /* -------------------- Function Pointer ----------------------
   ---- useful to implement callback functions.
   ---- using this we cannot allocate or deallocate the memory.
   ---- used to pass a function to function.
   ---- passed function can be called again (callback function)
    */

   get(&sum);
   get(&sub);
  
   return 0;
}
