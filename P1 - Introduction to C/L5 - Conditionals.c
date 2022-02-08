#include <stdio.h>

int main() {
    int age;
    scanf("%d" , &age);

    if (age < 12) {
        printf("Minor Children\t");
    }
    else if (age >= 12 && age < 18)
        printf("Young Child\t");    // no brackets use because only one line is in under statatement
    else
        printf("ADULT\t");

   // switch statement
   int a = age%10;
  
   //  only int or char in switch statement is admissible
   switch(a) {
       case 2:                 //  execute if a = 2
           printf("Found\n");
           break;
       case 3:                 // execute if a = 3
           printf("Found\n");
           break;
       default:                //  execute if a is other than 2 or 3
           printf("NOT FOUND\n");
           break;
    }
    // if break statement not uses, all blocks are executed after that block

   return 0;
}
