#include <stdio.h>
// #include "soln.c"    --- access functions from other files

int c = 98;

int main() {

    /*  --------------- Storage Class --------------
    ----- defines scope , default initial value & lifetime of variable

    ------------ Memory Assignment Architecture -----------------
    --> Code --> Static/Global Variable --> Stack --> Heap

    ------------    Type of Storage classes in C    -------------
    ---->   Automatic           ---->   External
    ---->   Static              ---->   Register
    */

    
    /* ---------------- Automatic Variables -------------------------
              Scope ---> Local Variable
              Default Value ---> Garbage Value
              Lifetime ---> end of function block where defined

    ---- variable define without storage class specification by default automatic variable
               (auto int a) == (int a)
    */
    auto int a; //  int a
    printf("%d\n", a); // random value
    
    
    /* --------------------------- Static Variable ---------------------------
                Scope --> Local to Block
                Initial value ----> 0
                lifetime --> throughout the whole program
    */
    static int j = 12;
    
    /* --------------------------- Register Variable ---------------------------
                Scope ---> Local to fuction
                Initial Value ---> Garbage Value
                Lifetme  ---> end of function block

        --- requests compiler to store the variable in CPU register instead of memory for faster access
        --- use for variables which use frequently in program
    */
    register int k = 4;
    k *= 9;
    k *= 12;
    printf("%d\n", k);
    
  
    /* ------------------------ External Variables ------------------------
                Scope ---> Global Variable
                initial Value ---> 0
                lifetime --> throughout the whole program
                
    ----- change inside any function
    ----- minimise the use of unneccesary global variables
    */
    extern int c; // use global variabe c
  
    /*
    extern int sid;
    printf("%d\n", sid);

    sid ----> global variable from soln.c file    */
  
    return 0;
}
