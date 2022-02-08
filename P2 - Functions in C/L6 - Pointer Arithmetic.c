#include <stdio.h>

int main() {
   // Pointer Arithmetics ----> ++  ,   --  ,   +   ,   -

   char var = 'c';
   char* ptr1 = &var;

   printf("%p\n" , ptr1);
   ptr1++;
   printf("%p\n" , ptr1);       //  address + 1
   printf("%p\n" , ptr1 + 1);     //  address + 1* sizeof(char)

   // -------- Array and Pointers ---------
   int arr[] = {9,5,7,8,3,2,7,9,0,4};
    
   //int *ptr = arr;  ----> ptr == &arr[0]
  
   printf("%p\n" , arr);        // address of arr[0]
   printf("%d\n" , *arr);       //  arr[0]

   //   arr[i] = *(arr + i)
   printf("%d\n" , *(arr + 2));       //  arr[2]
   printf("%p\n" , arr + 1);       //  address of arr[1]
   // address of arr[0] + 4 (sizeof(int))

   printf("%d\n" , *(&arr[2])); // arr[2]
    
   //  arr++; ----> INVALID
   int* arrayptr = arr;
   arrayptr++;     // VALID
    
  return 0;
}
