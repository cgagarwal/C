#include <stdio.h>
int t = 3;      // global scope

// CAll By Value
int sum(int x, int y) {
    // x and y are copies of a and b
    // original value not change
  
    int z = 0;  //  Local Scope
    // delete after the end of function
  
    return x+y;
    // x and y are formal parameters
}


// Call By Reference
void swap(int* x , int* y) {
    // x asnd y copy the address of a and b
    // original value changed by deferencing

    int c = *x;
    *x = *y;
    *y = c;
    return;     // Not Neccessary
}

int main() {
    int a = 4 , b = 6;
    int s = sum(a,b);
    // a and b are actual parameters
  
    a = t;    // global t
  
    printf("%d %d\n" , a,b);
    swap(&a,&b);        //  pass the address
    printf("%d %d\n" , a,b);
    
    // local variables are preffered over global variables
  
    return 0;
}
