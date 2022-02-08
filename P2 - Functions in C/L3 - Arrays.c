#include <stdio.h>

int main() {
    // datatype name[size];
    int marks[200];   // define
    marks[0] = 7;   // accesss

    // initialization (size calculated automatically)
    int num[] = {5,4,7,225,2,2,34,5,4,2};

    int sumj[2][4] = { {4, 5, 8 , 1}, {5 , 7, 3, 6} }; // 2D Array
    // dataype name[row][column]
  
    // calculate sizeof array
    int s = sizeof(num) / sizeof(num[0]);
    printf("%d\n" , s);       // 10

    printf("%d\n" , num[0]);        // 5
    printf("%d\n" , num[2]);        // 7
    printf("%d\n" , sumj[0][2]);      // 8
    printf("%d\n" , sumj[1][3]);      // 6
    
    int zero[10] = {};      // initialise all values of array with zero
    
    printf("%d\n" , zero[0]);   // 0
    printf("%d\n" , zero[1]);   // 0
    printf("%d\n" , zero[2]);   // 0
    printf("%d\n" , zero[3]);   // 0
    printf("%d\n" , zero[4]);   // 0
    
    int arr[5] = {5};       // 5 0 0 0 0
        
    return 0;
}
