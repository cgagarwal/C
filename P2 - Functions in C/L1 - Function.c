#include <stdio.h>
int multiply(int , int);        // only declaration

int sum(int a , int b) {
    return a+b;         //  declaration and definition both
}

// Concept of Recirsion
int factorial(int n) {
    // base case
    if(n == 0 || n == 1)
        return 1;       // termiation  condition
    
    return n*factorial(n-1);    // function call recusively
}

int main() {
    // Declaration -->  Tell compiler about variable (No space reserved)
    //  Definition --->     Tell compiler + Space reservation
    
    int a= 9,b = 87,c,d;
    c = sum(a,b);
    d = multiply(a,b);

    printf("%d\n%d\n" , c ,d);
    printf("%d\n",factorial(5));
    return 0;
}

//  must be declared earlier than main()
int multiply(int a , int b) {   //  definition  
    return a*b;
}
