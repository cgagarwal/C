#include <stdio.h>

// CAll By Value
int sum(int x, int y) {
    // x and y are copies of a and b
    // original value not change
  
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
  
    printf("%d %d\n" , a,b);
    swap(&a,&b);        //  pass the address
    printf("%d %d\n" , a,b);
  
    return 0;
}
