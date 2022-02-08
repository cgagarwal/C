#include <stdio.h>

int main() {
    // Arithmetic opertors
    // + , - , * , / , %
    printf("%d\n" , 8 % 4); // 0 reminder
    printf("%d\n" , 8 / 5); // 1 quotient
    // if a/b (a or b atleast one is float) ; a/b float
    printf("%f\n" , 8.0 / 5);   //  1.60000
  
    // increment (++) and decrement(--) operator

    // Relational opertors
    // == , != , > , >= , < , <=
    printf("%d\n" , 8 >= 5);        //  true --- 1
    printf("%d\n" , 8 == 5);        //  false -- 0
    
  
    // Logical Operators
    // && (and) , || (or) , ! (not)
    int a = 8 , b = 5;
    printf("%d\n" , a && b);    //  true
    // 0 is false ; all other int are true
  

    // Bitwise operator
    //  & (AND) ,  | (OR) ,  ^ (XOR)
    // convert in binary and then solve bitwise

    /*
          ~ (one's complement)  
    << (left shift)         >> (right shift)
    */

   // assignment opertaor
   // = , += ( a = a+1 ) , -= , *= , /=
   printf("%lu\n" , sizeof(double));     // 8
   printf("%lu\n" , sizeof(a));      //  4 (int size)

}
