#include <stdio.h>
#include <string.h>

// all members have single shared memory ; so use one at a time
union Movie {
    char hero[25];
    char villain[25];
    char heroine[25];
    int release;
}rednotice;     // global movie red notice
// memory of union = largest member memory

int main() {
   
   // string are assigned by copy
   strcpy(rednotice.heroine , "Gal Gadot");
   strcpy(rednotice.hero , "Ryan Reynolds");
   
   printf("%s\n" , rednotice.hero);     // Not Corrupted
   printf("%s\n" , rednotice.heroine);  // Corrupted memory
   printf("%s\n" , rednotice.villain);  // Corrupted memory
   // might be overwritten bcoz of same type but no use
    
   rednotice.release = 2021;
   printf("%d\n" , rednotice.release);
   // assigned recently so not corrupted

   union Movie julayi;
   strcpy(julayi.villain , "Sonu Sood");
   strcpy(julayi.hero , "Allu Arjun");
   strcpy(julayi.heroine , "Ileana D' Cruz");
   julayi.release = 2012;

   printf("%s\n" , julayi.hero);    // Corrupted Memory
   printf("%s\n" , julayi.heroine); // Corrupted Memory
   printf("%d\n" , julayi.release);
   printf("%s\n" , julayi.villain); // Corrupted Memory
   
   return 0;
}
