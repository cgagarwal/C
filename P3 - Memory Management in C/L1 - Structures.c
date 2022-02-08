#include <stdio.h>
#include <string.h>

// combine different type of datatypes together
struct Student {
    // members of structure
    int roll;
    int marks;
    char name[25];
}C,R;      // C and R global student

struct Student a,b;     // a and b are global students

int main() {
   
   struct Student c;    // c is local students
  
   // (.) ------ structure member operator
   a.roll = 101;
   b.roll = 202;
   b.marks = 412;
   
   strcpy(a.name , "R. Malhotra");
   printf("Marks of b : %d\n" , b.marks);
   printf("Name of a : %s\n" , a.name);

   return 0;
}
