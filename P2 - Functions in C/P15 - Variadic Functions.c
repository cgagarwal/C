#include <stdio.h>
#include <stdarg.h>     // for variable argument (va) functions

// variadic functions are functions that can take a variable number of arguments
// it takes one fixed argument and then any number of arguments can be passed
// they consists of atleast one fixed variable and then an ellipsis(…) as the last parameter

void display(int n,...) {
    va_list sm;     // to hold information about variable arguments
    
    // va_start(va_list , last_known_arg) 
    va_start(sm, n); // initialise the va_list
    
    va_list cpy;
    
    // copy variable argument list
    va_copy(cpy , sm);  // make cpy copy of sm
    
    for(int i = 0; i < n; i++) {
        
        // va_arg(va_list , type_of_return_value)
        printf("%d ", va_arg(sm, int)); // retrieve next argument
        // also modifies the va_list to next argument
        
    }
    printf("\n");
    
    // ends the traversal of va_list invoked by va_copy or va_start
    va_end(sm);    // va_end(va_list)
    va_end(cpy);
}


int main() {
    
    display(4,3,2,1,0);     // 3 2 1 0
    display(2,5,6);      // 5 6
    
    return 0;
}
