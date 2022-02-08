#include <stdio.h>

int main() {

    /*  ------------------ Void Ponter -------------------
    --- no datatype associated , so easily typecasted to any pointer
    --- it is a general purpose pointer variable
    --- use in dynamic memory allocation
    --- not possible to deference void pointers
    --- pointer arithmeic not allowed
    */

   int x = 10;
   char y = 'c';

   // typecasting before deferencing important
   
   void *ptr = &x;   // holds integer address
   printf("%d\n", *((int*) ptr));       // 10
   
   ptr = &y;    // now holds char address
   printf("%c\n", *(char*) ptr);        // c

   return 0;
}
