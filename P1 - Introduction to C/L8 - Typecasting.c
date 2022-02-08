#include <stdio.h>
#include <stdlib.h>     // for atoi()

int main() {
    float a = 42/5;
    float b = (float)42/5;

    //  Typecasting Syntax ---> (type) value;

    printf("%f\n" , a );  // 8.000000
    printf("%f\n" , b );  // 8.400000
    printf("%d\n" , (int) b );  // 8
    
  
    // convert string in integer
    int s = atoi("278");
    printf("%d\n" , s);     // 278
  
    return 0;
}
