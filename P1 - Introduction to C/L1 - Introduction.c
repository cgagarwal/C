// pre-processor command to include standard library
#include <stdio.h>

// warning generated : default type 'int'
main() {

    /*
               ---------------- Process in System ----------------
    preprocessing ----> compilation ---> assembly ---> linking -----> loading
        
       ------------------------- Rules for Variable Declaration ------------------------------
    --- A variable can have alphabets, digits, and underscore.
    --- A variable name can start with the alphabet, and underscore only. It can't start with a digit.
    --- No whitespace is allowed within the variable name.
    --- A variable name must not be any reserved word or keyword.
    
    */
    
    // input from user
    int a;
    scanf("%d", &a);    // returns total number of inputs scanned successfully
 
    // print the statement
    printf("Hello , Chirag\n");     // returns total number of characters printed
    
    return 0;       // Not Must
}
