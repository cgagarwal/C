#include <stdio.h>

void twoDarray(int arr[][2]); 
// only first size is not important all other sizes are important

// array as parameter
int sum_of_marks(int arr[]) {
    // full array never passed only first element address passed : (arr = address of b)
    // sizeof(arr)      ----->  8 bytes (size of storing a memory address)
    int sum = 0;
    for(int i = 0 ; i < 9 ; i+= 1)
        sum += arr[i];
    arr[0]  = 12;   // value in original array changed
    // array passed as like as pointers 
    return sum;
}

// declare pointer
float avg(int* ptr) {
    float sum = 0.0;
    for(int i = 0 ; i < 9 ; i+= 1)
        sum += *(ptr+i);        // ptr[i] is also valid
    return sum/9;
}

int main() {
    /*  ------- Passing Array in Fuction ----------
    -----   declaring array as parameter
    -----   declare pointer to hold base address of array
      in both cases , original array changes
    */

   int arr[] = {5,6,7,8,2,4,5,6,7}; // arr is pointer to arr[0]

   printf("%d\n", arr[0]);      // 5

   int t = sum_of_marks(arr);       // pass array to fuction
   printf("%d\n", t);       //  50

   printf("%d\n", arr[0]);  //  12

   float a = avg(arr);
   printf("%0.2f\n",a);     // 6.33

   // 2 D array
   int array[][2] = {{2,3},{3,4}, {6,8}};
  
   return 0;
}
